// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSYSTEMAUDIOANALYZERXPCSUBSCRIBER_H
#define SNSYSTEMAUDIOANALYZERXPCSUBSCRIBER_H

@class NSMutableDictionary, NSString;
@protocol SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol;

#import <Foundation/Foundation.h>


@interface SNSystemAudioAnalyzerXPCSubscriber : NSObject <SNSystemAudioAnalyzerProtocol, SNSystemAudioAnalyzerXPCProtocol>

 {
    NSMutableDictionary *_remoteObservers;
    id<SNSystemAudioAnalyzerProtocol> *_receiver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;
-(void)xpcAddRequest:(id)arg0 withObserver:(id)arg1 completionHandler:(id)arg2 ;
-(void)xpcRemoveAllRequestsWithCompletionHandler:(id)arg0 ;
-(void)xpcRemoveRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)xpcSetAudioConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif