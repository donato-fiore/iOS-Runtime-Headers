// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNSYSTEMAUDIOANALYZERXPCPUBLISHER_H
#define SNSYSTEMAUDIOANALYZERXPCPUBLISHER_H

@protocol SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol>

 {
    id<SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> *_subscriber;
}




-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithSubscriber:(id)arg0 ;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif