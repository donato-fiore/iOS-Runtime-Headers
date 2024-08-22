// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TILANGUAGEMODELOFFLINELEARNINGTASK_H
#define TILANGUAGEMODELOFFLINELEARNINGTASK_H

@class NSString, NSSet, NSMutableDictionary, NSCharacterSet;
@protocol TILinguisticDataSource;

#import <Foundation/Foundation.h>

#import "TILanguageModelOfflineLearningHandle.h"

@interface TILanguageModelOfflineLearningTask : NSObject {
    TILanguageModelOfflineLearningHandle *_handleForLanguageLikelihood;
}


@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) NSObject<TILinguisticDataSource> *dataSource;
@property (readonly, nonatomic) NSSet *forwardedMessageSeparators;
@property (readonly, nonatomic) TILanguageModelOfflineLearningHandle *handleForLanguageLikelihood;
@property (readonly, nonatomic) NSMutableDictionary *handles; // ivar: _handles
@property (readonly, nonatomic) NSCharacterSet *linePaddingCharacters;
@property (readonly, nonatomic) BOOL oneTimeTask; // ivar: _oneTimeTask


+(id)taskWithClientIdentifier:(id)arg0 oneTimeTask:(BOOL)arg1 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg0 forLanguage:(id)arg1 adaptationContext:(id)arg2 ;
-(BOOL)incrementUsageCountsForMessages:(id)arg0 withHandle:(id)arg1 ;
-(id)handleForLanguage:(id)arg0 ;
-(id)initWithClientIdentifier:(id)arg0 oneTimeTask:(BOOL)arg1 ;
-(void)didFinishLearning;
-(void)enumerateHandlesForLanguage:(id)arg0 withBlock:(id)arg1 ;
-(void)setAdaptationContext:(id)arg0 onHandle:(id)arg1 ;


@end


#endif