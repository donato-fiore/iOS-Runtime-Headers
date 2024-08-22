// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSMOTIONPROVIDER_H
#define DSMOTIONPROVIDER_H

@protocol DSMotionProviderDelegate;


#import "DSProvider.h"

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) NSObject<DSMotionProviderDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)failedToStartProviderWithOptions:(id)arg0 error:(id)arg1 ;
-(void)requestedMotionDataWithOption:(id)arg0 ;
-(void)sendMotionData:(id)arg0 ;
-(void)startMotionDataProviderWithOptions:(id)arg0 ;
-(void)startedProviderWithOptions:(id)arg0 ;
-(void)stopMotionDataProvider;
-(void)stoppedProvider;
-(void)subscribedToMotionDataWithOptions:(id)arg0 ;
-(void)subscriptionExpired;
-(void)unsubscribed;


@end


#endif