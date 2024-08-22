// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;


@end


#endif