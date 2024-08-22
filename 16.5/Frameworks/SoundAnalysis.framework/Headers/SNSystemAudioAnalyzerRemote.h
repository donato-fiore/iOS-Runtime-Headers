// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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




-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)setAudioConfiguration:(id)arg0 ;


@end


#endif