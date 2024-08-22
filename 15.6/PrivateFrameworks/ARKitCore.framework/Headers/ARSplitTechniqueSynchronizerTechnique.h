// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARSPLITTECHNIQUESYNCHRONIZERTECHNIQUE_H
#define ARSPLITTECHNIQUESYNCHRONIZERTECHNIQUE_H

@class NSMutableArray, NSMutableDictionary, NSString, NSSet;
@protocol ARTechniqueDelegate, OS_dispatch_semaphore;


#import "ARTechnique.h"
#import "ARCircularArray.h"

@interface ARSplitTechniqueSynchronizerTechnique : ARTechnique <ARTechniqueDelegate>

 {
    NSMutableArray *_lastReceivedResults;
    NSObject<OS_dispatch_semaphore> *_lastReceivedResultsSemaphore;
    ARCircularArray *_contextsWaitingForSynchronizationData;
    NSMutableDictionary *_pendingResults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *synchronizedResultDataClasses; // ivar: _synchronizedResultDataClasses


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)reconfigurableFrom:(id)arg0 ;
-(id)initWithSynchronizedResultDataClasses:(id)arg0 ;
-(void)_recursivelyGatherData:(id)arg0 fromContext:(id)arg1 ;
-(void)requestResultDataAtTimestamp:(CGFloat)arg0 context:(id)arg1 ;
-(void)technique:(id)arg0 didFailWithError:(id)arg1 ;
-(void)technique:(id)arg0 didOutputResultData:(id)arg1 timestamp:(CGFloat)arg2 context:(id)arg3 ;


@end


#endif