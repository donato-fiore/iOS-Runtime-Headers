// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVOCABULARYADMINISTRATOR_H
#define CKVOCABULARYADMINISTRATOR_H

@protocol CKVAdminService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVocabularyAdministrator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    CGFloat _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)makeAdministrator;
+(void)initialize;
-(id)init;
-(id)initWithAdminService:(id)arg0 queue:(id)arg1 ;
-(id)initWithAdminService:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 ;
-(id)rawSpeechProfileConverter;
-(id)rawSpeechProfileConverterOmittingItemTypes:(id)arg0 ;
-(id)simulateEventHandling:(BOOL)arg0 ;
-(void)_triggerMigration:(BOOL)arg0 completeAfterTrigger:(BOOL)arg1 completion:(id)arg2 ;
-(void)beginEvaluation:(id)arg0 options:(unsigned short)arg1 completion:(id)arg2 ;
-(void)captureVocabularySnapshot:(id)arg0 ;
-(void)captureVocabularySnapshot:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllItemsWithUserId:(id)arg0 deviceId:(id)arg1 completion:(id)arg2 ;
-(void)endEvaluation:(id)arg0 ;
-(void)executeEvaluationTask:(unsigned short)arg0 completion:(id)arg1 ;
-(void)findProfileSnapshotsNearDate:(id)arg0 completion:(id)arg1 ;
-(void)rebuildSpeechProfileForUserId:(id)arg0 completion:(id)arg1 ;
-(void)triggerMaintenance:(id)arg0 ;
-(void)triggerMigration:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerMigration:(id)arg0 ;


@end


#endif