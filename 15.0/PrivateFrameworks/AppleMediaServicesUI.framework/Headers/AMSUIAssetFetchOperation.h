// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIASSETFETCHOPERATION_H
#define AMSUIASSETFETCHOPERATION_H

@class NSOperation, AMSPromise;



@interface AMSUIAssetFetchOperation : NSOperation

@property (nonatomic, getter=isLowLatency) BOOL lowLatency; // ivar: _lowLatency
@property (retain, nonatomic) AMSPromise *operationPromise; // ivar: _operationPromise


-(void)_finishWithImage:(id)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)main;
-(void)setQueuePriority:(NSInteger)arg0 ;


@end


#endif