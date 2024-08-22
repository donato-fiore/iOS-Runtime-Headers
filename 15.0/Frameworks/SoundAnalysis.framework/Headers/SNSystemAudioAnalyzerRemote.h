// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSYSTEMAUDIOANALYZERREMOTE_H
#define SNSYSTEMAUDIOANALYZERREMOTE_H

@class NSMutableDictionary;
@protocol SNSystemAudioAnalyzerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SNAudioConfiguration.h"

@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol>

 {
    NSMutableDictionary *_registeredRequests;
    id<SNSystemAudioAnalyzerProtocol> *_analyzer;
    id *_generator;
    NSObject<OS_dispatch_queue> *_queue;
    SNAudioConfiguration *_audioConfiguration;
}




+(id)connectionLostError;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)_acquireSystemAudioAnalyzer;
-(id)init;
-(id)initWithClient:(id)arg0 queue:(id)arg1 ;
// -(id)initWithRemoteAnalyzerGenerator:(id)arg0 queue:(unk)arg1  ;
-(void)_addRequest:(id)arg0 withObserver:(id)arg1 ;
-(void)_invalidateActiveAnalyzer;
-(void)_invalidateAnalyzer:(id)arg0 ;
-(void)_removeAllRequests;
-(void)_removeRequest:(id)arg0 ;
-(void)_setAudioConfiguration:(id)arg0 ;
-(void)invalidateActiveAnalyzer;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif