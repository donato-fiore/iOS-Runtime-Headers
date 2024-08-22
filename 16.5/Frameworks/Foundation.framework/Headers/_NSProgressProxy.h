// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPROGRESSPROXY_H
#define _NSPROGRESSPROXY_H

@protocol NSProgressPublisher;


#import "NSProgress.h"

@interface _NSProgressProxy : NSProgress {
    id<NSProgressPublisher> *_forwarder;
    BOOL _isOld;
    id *_unpublishingHandler;
}




-(BOOL)isOld;
-(CGFloat)fractionCompleted;
-(id)_initWithForwarder:(id)arg0 values:(id)arg1 isOld:(BOOL)arg2 ;
-(id)byteCompletedCount;
-(id)byteTotalCount;
-(id)estimatedTimeRemaining;
-(id)fileCompletedCount;
-(id)fileOperationKind;
-(id)fileTotalCount;
-(id)fileURL;
-(id)throughput;
-(void)_acknowledgeWithSuccess:(BOOL)arg0 ;
-(void)_invokePublishingHandler:(id)arg0 ;
-(void)_invokeUnpublishingHandler;
-(void)_setRemoteUserInfoValue:(id)arg0 forKey:(id)arg1 ;
-(void)_setRemoteValues:(id)arg0 forKeys:(id)arg1 ;
-(void)acknowledgeWithSuccess:(BOOL)arg0 ;
-(void)becomeCurrentWithPendingUnitCount:(NSInteger)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)pause;
-(void)prioritize;
-(void)publish;
-(void)resignCurrent;
-(void)resume;
-(void)setByteCompletedCount:(id)arg0 ;
-(void)setByteTotalCount:(id)arg0 ;
-(void)setCancellable:(BOOL)arg0 ;
-(void)setCancellationHandler:(id)arg0 ;
-(void)setCompletedUnitCount:(NSInteger)arg0 ;
-(void)setEstimatedTimeRemaining:(id)arg0 ;
-(void)setFileCompletedCount:(id)arg0 ;
-(void)setFileOperationKind:(id)arg0 ;
-(void)setFileTotalCount:(id)arg0 ;
-(void)setFileURL:(id)arg0 ;
-(void)setKind:(id)arg0 ;
-(void)setLocalizedDescription:(id)arg0 ;
-(void)setPausable:(BOOL)arg0 ;
-(void)setPausingHandler:(id)arg0 ;
-(void)setPrioritizable:(BOOL)arg0 ;
-(void)setPrioritizationHandler:(id)arg0 ;
-(void)setThroughput:(id)arg0 ;
-(void)setTotalUnitCount:(NSInteger)arg0 ;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;
-(void)unpublish;


@end


#endif