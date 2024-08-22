// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSCLIENTMESSAGESTREAM_H
#define SIRIANALYTICSCLIENTMESSAGESTREAM_H

@class NSString;
@protocol SiriAnalyticsMessageStream, OS_dispatch_queue, SiriAnalyticsService, SiriAnalyticsClientMessageStreamDelegate;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsClientMessageStream : NSObject <SiriAnalyticsMessageStream>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsService> *_service;
    id<SiriAnalyticsClientMessageStreamDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)analyticsService;
-(id)initWithQueue:(id)arg0 analyticsService:(id)arg1 delegate:(id)arg2 ;
-(void)barrierWithCompletion:(id)arg0 ;
-(void)emitMessage:(id)arg0 ;
-(void)emitMessage:(id)arg0 isolatedStreamUUID:(id)arg1 ;
-(void)emitMessage:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)emitMessage:(id)arg0 timestamp:(NSUInteger)arg1 isolatedStreamUUID:(id)arg2 ;
-(void)enqueueLargeMessageObjectFromPath:(id)arg0 assetIdentifier:(id)arg1 messageMetadata:(id)arg2 completion:(id)arg3 ;
-(void)resolvePartialMessage:(id)arg0 ;
-(void)resolvePartialMessage:(id)arg0 isolatedStreamUUID:(id)arg1 ;
-(void)resolvePartialMessage:(id)arg0 timestamp:(NSUInteger)arg1 ;
-(void)resolvePartialMessage:(id)arg0 timestamp:(NSUInteger)arg1 isolatedStreamUUID:(id)arg2 ;
-(void)setAnalyticsService:(id)arg0 ;


@end


#endif