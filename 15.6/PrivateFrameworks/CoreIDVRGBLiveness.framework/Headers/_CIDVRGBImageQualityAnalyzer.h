// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CIDVRGBIMAGEQUALITYANALYZER_H
#define _CIDVRGBIMAGEQUALITYANALYZER_H

@class PADVNSerialRequestsScheduler, NSNumber, NSString;
@protocol CIDVRGBImageQualityAnalyzer, OS_dispatch_queue;



@interface _CIDVRGBImageQualityAnalyzer : PADVNSerialRequestsScheduler <CIDVRGBImageQualityAnalyzer>

 {
    id *_completion;
    NSObject<OS_dispatch_queue> *_queue;
    CGRect _regionOfInterest;
    NSNumber *_lastIssue;
    NSUInteger _lastIssueCount;
    BOOL _live;
    BOOL _lightweight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)performLightweightCheckWithFaces:(id)arg0 ;
-(id)_errorFromResult:(NSInteger)arg0 ;
-(id)_verifyBlurriness:(id)arg0 ;
-(id)_verifyExposure:(id)arg0 ;
-(id)_verifyFaceAttributes:(id)arg0 ;
-(id)_verifyFacePose:(id)arg0 ;
-(id)_verifyFacePosition:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)_registerResult:(id)arg0 ;
-(void)_setupForAnalysisWithOptions:(id)arg0 lightweight:(BOOL)arg1 completion:(id)arg2 ;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)processFrame:(id)arg0 ;
-(void)verifyLightweightQualityForFrame:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)verifyQualityForFrame:(id)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif