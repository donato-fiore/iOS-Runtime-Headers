// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSYSTEMAUDIOANALYZER_H
#define SNSYSTEMAUDIOANALYZER_H

@protocol SNSystemAudioAnalyzerProtocol;

#import <Foundation/Foundation.h>


@interface SNSystemAudioAnalyzer : NSObject {
    id<SNSystemAudioAnalyzerProtocol> *_impl;
}




+(id)selectAppropriateImplForThisProcess;
+(void)configureNewAnalyzersToComputeInThisProcess:(BOOL)arg0 ;
-(BOOL)addRequest:(id)arg0 withObserver:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAudioConfiguration:(id)arg0 ;
-(id)initWithImpl:(id)arg0 ;
-(void)addRequestInBackground:(id)arg0 withObserver:(id)arg1 ;
-(void)removeAllRequests;
-(void)removeRequest:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif