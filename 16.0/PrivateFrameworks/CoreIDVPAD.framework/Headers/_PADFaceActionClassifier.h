// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PADFACEACTIONCLASSIFIER_H
#define _PADFACEACTIONCLASSIFIER_H

@class NSNumber, NSString, NSMutableArray;
@protocol PADFaceActionClassifier, PADAlgorithms, OS_dispatch_queue, PADFaceActionModuleDelegate;


#import "PADVNSerialRequestsScheduler.h"

@interface _PADFaceActionClassifier : PADVNSerialRequestsScheduler <PADFaceActionClassifier>

 {
    id<PADAlgorithms> *_algorithms;
    NSObject<OS_dispatch_queue> *_queue;
    CGSize _imageSize;
    NSInteger _facOption;
    BOOL _hasSetRandomIDFrames;
}


@property (retain, nonatomic) NSNumber *assessment; // ivar: _assessment
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PADFaceActionModuleDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *faceprintsID; // ivar: _faceprintsID
@property (nonatomic) NSInteger gesture; // ivar: _gesture
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL idMatchingFramesSelected; // ivar: _idMatchingFramesSelected
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *timestampsFAC; // ivar: _timestampsFAC
@property (retain, nonatomic) NSMutableArray *timestampsID; // ivar: _timestampsID
@property (readonly, nonatomic) NSMutableArray *timestampsReferenceFAC; // ivar: _timestampsReferenceFAC


-(BOOL)_isDetectingFaceMovementGesture;
-(BOOL)shouldProcessFrame:(id)arg0 ;
-(NSUInteger)observationCompositeSetSize;
-(id)initWithGesture:(NSInteger)arg0 algorithms:(id)arg1 ;
-(id)observationsFromRequest:(id)arg0 ;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)_appendIDFaceprintResult:(id)arg0 faceprint:(id)arg1 ;
-(void)_handleIDMatchingAndReferenceFramesForFACResult:(id)arg0 withObservationCompositeSet:(id)arg1 ;
-(void)_processObservationCompositeSetForIDMatchingFrames:(id)arg0 ;
-(void)_processObservationCompositeSetWithFAC:(id)arg0 ;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)analyzeObservationCompositeSet:(id)arg0 ;
-(void)dealloc;
-(void)handleObservationCompositeError:(id)arg0 ;
-(void)invalidate;
-(void)restart;
-(void)setFACOption:(NSInteger)arg0 ;


@end


#endif