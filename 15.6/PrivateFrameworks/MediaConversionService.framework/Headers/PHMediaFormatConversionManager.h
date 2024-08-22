// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHMEDIAFORMATCONVERSIONMANAGER_H
#define PHMEDIAFORMATCONVERSIONMANAGER_H

@class NSURL, NSMutableArray;
@protocol OS_dispatch_queue, PHMediaFormatConversionImplementation;

#import <Foundation/Foundation.h>

#import "PHMediaFormatConversionJob.h"

@interface PHMediaFormatConversionManager : NSObject {
    id *_transferBehaviorUserPreferenceOverride;
}


@property (retain) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain) NSObject<PHMediaFormatConversionImplementation> *conversionImplementation; // ivar: _conversionImplementation
@property (retain) PHMediaFormatConversionJob *currentlyProcessingJob; // ivar: _currentlyProcessingJob
@property (retain, nonatomic) NSURL *directoryForTemporaryFiles; // ivar: _directoryForTemporaryFiles
@property (retain) NSObject<OS_dispatch_queue> *preflightQueue; // ivar: _preflightQueue
@property (retain) NSMutableArray *queuedJobs; // ivar: _queuedJobs
@property NSUInteger state; // ivar: _state
@property (retain) NSObject<OS_dispatch_queue> *stateQueue; // ivar: _stateQueue


-(id)init;
-(id)jobForConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)rootAncestorRequestForRequest:(id)arg0 ;
-(id)ut_objectsToBeDeallocatedWithReceiver;
-(void)cancellationRequestedForJob:(id)arg0 ;
-(void)configureTransferBehaviorUserPreferenceForRequest:(id)arg0 ;
-(void)enqueueConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)performConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)preflightAllRelatedRequestsForCurrentJob;
-(void)preflightConversionRequest:(id)arg0 ;
-(void)preflightConversionRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)processQueuedJobs;
-(void)setTransferBehaviorUserPreferenceOverride:(id)arg0 ;
-(void)setupConversionImplementation;
-(void)validateLivePhotoPairingIdentifierConfigurationForRequest:(id)arg0 ;


@end


#endif