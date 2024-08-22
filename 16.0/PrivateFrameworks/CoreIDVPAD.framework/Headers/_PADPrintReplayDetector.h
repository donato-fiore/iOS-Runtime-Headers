// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PADPRINTREPLAYDETECTOR_H
#define _PADPRINTREPLAYDETECTOR_H

@class NSNumber, NSMutableArray, NSString;
@protocol PADPrintReplayDetector, PADAlgorithms, OS_dispatch_queue;


#import "PADVNSerialRequestsScheduler.h"

@interface _PADPrintReplayDetector : PADVNSerialRequestsScheduler <PADPrintReplayDetector>

 {
    id<PADAlgorithms> *_algorithms;
    CGFloat _currentFrameTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSNumber *assessment; // ivar: _assessment
@property (retain, nonatomic) NSMutableArray *assessmentsPRD; // ivar: _assessmentsPRD
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *fakeAssessment;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *liveAssessment;
@property (readonly) Class superclass;


-(BOOL)shouldProcessFrame:(id)arg0 ;
-(id)init:(id)arg0 ;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)analyzeObservationCompositeSet:(id)arg0 ;
-(void)dealloc;
-(void)handleObservationCompositeError:(id)arg0 ;


@end


#endif