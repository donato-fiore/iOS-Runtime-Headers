// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCINEMATICTAPTOTRACK_H
#define FTCINEMATICTAPTOTRACK_H

@protocol MTLCommandQueue, FTScaling;

#import <Foundation/Foundation.h>

#import "FTTapToTrackPreprocessor.h"
#import "FTNetworkDescriptor.h"
#import "FTTapToBox.h"
#import "FTCinematicTracker.h"

@interface FTCinematicTapToTrack : NSObject {
    id<MTLCommandQueue> *_commandQueue;
    id<FTScaling> *_scaler;
    FTTapToTrackPreprocessor *_preprocessor;
    FTNetworkDescriptor *_exemplarNetDesc;
    FTNetworkDescriptor *_instanceNetDesc;
    unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _exemplarNet;
    unique_ptr<ik::EspressoNet, std::default_delete<ik::EspressoNet>> _instanceNet;
    PixelBufferTensor _exemplarCrop;
    PixelBufferTensor _instanceCrop;
    FTTapToBox *_tapToBox;
    FTCinematicTracker *_tracker;
}




+(id)tracker;
-(BOOL)_unsafeStartTrackingRect:(struct CGRect )arg0 colorBuffer:(struct __CVBuffer *)arg1 ;
-(BOOL)isTrackingActive;
-(BOOL)reset;
-(BOOL)startTrackingRect:(struct CGRect )arg0 colorBuffer:(struct __CVBuffer *)arg1 ;
-(id)_maybeFetchTrackByCommittingState:(id)arg0 ;
-(id)initWithEspressoEngine:(int)arg0 scalingBackend:(int)arg1 commandQueue:(id)arg2 ;
-(struct ? )_unsafeStepTrackingWithFrame:(struct __CVBuffer *)arg0 ;
-(struct ? )predictRectForPoint:(struct CGPoint )arg0 inColorBuffer:(struct __CVBuffer *)arg1 ;
-(struct ? )stepTrackingWithFrame:(struct __CVBuffer *)arg0 ;
-(struct EspressoConfig )_espressoConfigFromDescriptor:(id)arg0 engine:(*void)arg1 ;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )_resolveNetworkPath:(id)arg0 ;
-(void)_preprocessBuffer:(struct __CVBuffer *)arg0 andValidateState:(id)arg1 isOp:(NSInteger)arg2 ;
-(void)_setupNetworksWithEngine:(*void)arg0 ;
-(void)_setupScalerWithBackend:(int)arg0 ;


@end


#endif