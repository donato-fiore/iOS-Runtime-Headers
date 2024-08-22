// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAQUESTIONCONTROLLER_H
#define PHAQUESTIONCONTROLLER_H

@class PGManager, NSMutableDictionary, NSUbiquitousKeyValueStore, PGTrialSession;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHAQuestionController : NSObject {
    short _currentQuestionVersion;
}


@property (retain, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (retain, nonatomic) NSMutableDictionary *questionTypeImportanceByQuestionType; // ivar: _questionTypeImportanceByQuestionType
@property (retain, nonatomic) NSUbiquitousKeyValueStore *store; // ivar: _store
@property (retain, nonatomic) PGTrialSession *trialSession; // ivar: _trialSession


-(BOOL)generateQuestionsWithOptions:(NSInteger)arg0 limit:(NSUInteger)arg1 handleQuestionVersionBump:(BOOL)arg2 updateInvalidQuestions:(BOOL)arg3 progress:(id)arg4 ;
-(BOOL)generateQuestionsWithOptions:(NSInteger)arg0 progress:(id)arg1 ;
-(BOOL)persistQuestions:(id)arg0 ;
-(CGFloat)importanceOfQuestionType:(id)arg0 ;
-(id)allQuestionFactories;
-(id)currentQuestionsKVSData;
-(id)initWithGraphManager:(id)arg0 ;
-(id)questionFactoriesForOptions:(NSInteger)arg0 ;
-(id)selectedQuestionsFromSortedQuestionsByQuestionType:(id)arg0 withLimit:(NSUInteger)arg1 ;
-(void)_handleKVSQuestionsUpdateIfNeededWithProgressBlock:(id)arg0 ;
-(void)_handleQuestionVersionBumpIfNeededWithProgressBlock:(id)arg0 ;
-(void)_syncAnsweredQuestionsWithProgressBlock:(id)arg0 ;
-(void)_updateInvalidQuestionsWithProgressBlock:(id)arg0 ;
-(void)assignScoreToQuestions:(id)arg0 ;
-(void)removeCurrentKVSData;


@end


#endif