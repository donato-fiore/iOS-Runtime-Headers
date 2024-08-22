// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSMOTIONLISTENER_H
#define DSMOTIONLISTENER_H

@class NSArray, NSString;
@protocol DSListenerClientProtocol, OS_dispatch_queue, DSMotionListenerDelegate;

#import <Foundation/Foundation.h>

#import "DSClientMotionDataOptions.h"
#import "DSMotionStateListenerProxy.h"

@interface DSMotionListener : NSObject <DSListenerClientProtocol>



@property (readonly) NSArray *activeProviders;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSMotionListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isSubscribed; // ivar: _isSubscribed
@property (nonatomic) BOOL isTestMode; // ivar: _isTestMode
@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions; // ivar: _motionDataOptions
@property (retain, nonatomic) DSMotionStateListenerProxy *sharedListener; // ivar: _sharedListener
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(void)failedToStartListenerWithError:(id)arg0 ;
-(void)receivedData:(id)arg0 fromProvider:(id)arg1 ;
-(void)requestMotionData;
-(void)startMotionDataListenerWithOptions:(id)arg0 ;
-(void)startedListener;
-(void)stopMotionDataListener;
-(void)stoppedListener;
-(void)updateProviders:(id)arg0 ;


@end


#endif