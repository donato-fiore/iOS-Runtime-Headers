// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PADVNFACEPRINTDETECTOR_H
#define _PADVNFACEPRINTDETECTOR_H

@class NSString, NSMutableArray;
@protocol PADVNFaceprintDetector, OS_dispatch_queue;


#import "PADVNSerialRequestsScheduler.h"

@interface _PADVNFaceprintDetector : PADVNSerialRequestsScheduler <PADVNFaceprintDetector>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id *_completion;
    NSUInteger _setSize;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *faceprints; // ivar: _faceprints
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)observationCompositeSetSize;
-(id)init;
-(id)requestsForFrame:(id)arg0 handler:(id)arg1 ;
-(void)analyzeObservationComposite:(id)arg0 ;
-(void)analyzeObservationCompositeSet:(id)arg0 ;
-(void)handleObservationCompositeError:(id)arg0 ;
-(void)invalidate;
-(void)processFrames:(id)arg0 completion:(id)arg1 ;


@end


#endif