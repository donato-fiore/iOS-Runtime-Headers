// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTSETTINGSYNCSENDQUEUE_H
#define BLTSETTINGSYNCSENDQUEUE_H

@class NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BLTSettingSyncSendQueue : NSObject {
    NSObject<OS_dispatch_queue> *_sectionInfoSenderQueue;
    NSObject<OS_dispatch_queue> *_sectionInfoProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_sectionInfoSemaphore;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconSenderQueue;
    NSObject<OS_dispatch_queue> *_subsectionParameterIconProcessingQueue;
    NSObject<OS_dispatch_semaphore> *_subsectionParameterIconSemaphore;
}


@property (retain, nonatomic) NSDictionary *iconAllowList; // ivar: _iconAllowList
@property (copy, nonatomic) id *sectionIconSender; // ivar: _sectionIconSender
@property (copy, nonatomic) id *sectionInfoSender; // ivar: _sectionInfoSender
@property (copy, nonatomic) id *sectionParametersProvider; // ivar: _sectionParametersProvider
@property (copy, nonatomic) id *sectionRemoveSender; // ivar: _sectionRemoveSender


-(id)init;
-(id)initWithMaxConcurrentSendCount:(NSUInteger)arg0 ;
-(void)_sendEffectiveSectionInfo:(id)arg0 waitForAcknowledgement:(BOOL)arg1 withQueue:(id)arg2 spoolToFile:(BOOL)arg3 andCompletion:(id)arg4 ;
-(void)_sendSectionIcon:(id)arg0 forSectionID:(id)arg1 forSubtypeID:(NSInteger)arg2 waitForAcknowledgement:(BOOL)arg3 withQueue:(id)arg4 spoolToFile:(BOOL)arg5 andCompletion:(id)arg6 ;
// -(void)_sendSectionInfoWithSectionID:(NSUInteger)arg0 usingProvider:(id)arg1 updateProgress:(unk)arg2 sendCompleted:(id)arg3 sendAttempt:(unk)arg4 waitForAcknowledgement:(id)arg5 group:(unk)arg6 spoolToFile:(NSUInteger)arg7  ;
// -(void)sendEffectiveSectionInfosUsingProvider:(id)arg0 count:(unk)arg1 sectionInfoSendCompleted:(NSUInteger)arg2 completion:(id)arg3 progress:(unk)arg4 spoolToFile:(id)arg5  ;
-(void)sendRemoveSectionWithSectionID:(id)arg0 sent:(id)arg1 ;
-(void)sendSectionSubtypeParameterIcons:(id)arg0 sectionID:(id)arg1 waitForAcknowledgement:(BOOL)arg2 spoolToFile:(BOOL)arg3 completion:(id)arg4 ;
// -(void)sendSpooledRequestsNowWithSender:(id)arg0 completion:(unk)arg1 progress:(id)arg2  ;


@end


#endif