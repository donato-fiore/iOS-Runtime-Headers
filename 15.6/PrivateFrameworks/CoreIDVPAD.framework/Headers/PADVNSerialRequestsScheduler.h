// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PADVNSERIALREQUESTSSCHEDULER_H
#define PADVNSERIALREQUESTSSCHEDULER_H

@class NSMutableDictionary, NSMutableArray, NSArray, NSError, NSString;
@protocol PADFrameMonitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PADVNSerialRequestsScheduler : NSObject <PADFrameMonitor>

 {
    NSMutableDictionary *_currentObservationComposite;
    NSMutableArray *_currentObservationCompositeSet;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _remainingRequests;
    NSArray *_requests;
    NSError *_requestError;
    BOOL _isProcessingFrame;
    id *_currentFrameProcessingCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldProcessFrame:(id)arg0 ;
-(NSUInteger)observationCompositeSetSize;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)observationsFromRequest:(id)arg0 ;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)_dispatchVisionRequestForFrame:(id)arg0 ;
-(void)_reset;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)analyzeObservationCompositeSet:(id)arg0 ;
-(void)handleObservationCompositeError:(id)arg0 ;
-(void)handleResultForRequest:(id)arg0 error:(id)arg1 ;
-(void)invalidate;
-(void)processFrame:(id)arg0 ;
-(void)waitForCurrentFrameProcessingWithCompletion:(id)arg0 ;


@end


#endif