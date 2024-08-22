// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIDESTRAININGRESULT_H
#define HMIDESTRAININGRESULT_H

@class HMFObject, NSArray;


#import "HMIDESMutableFloatArray.h"

@interface HMIDESTrainingResult : HMFObject

@property (readonly) HMIDESMutableFloatArray *flattedTrainingResult;
@property (readonly) float l2Norm;
@property (readonly) NSArray *layerParameters; // ivar: _layerParameters
@property (readonly) NSArray *losses; // ivar: _losses
@property (readonly) float postTrainingLoss; // ivar: _postTrainingLoss
@property (readonly) float preTrainingLoss; // ivar: _preTrainingLoss


-(id)initWithLayerParameters:(id)arg0 losses:(id)arg1 preTrainingLoss:(float)arg2 postTrainingLoss:(float)arg3 ;


@end


#endif