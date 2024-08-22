// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBLIGHTTUNNELFILTER_H
#define PBLIGHTTUNNELFILTER_H



#import "PBFilter.h"

@interface PBLightTunnelFilter : PBFilter {
    BOOL firstTime;
    float _inputAmount;
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputRotation;
}


@property float inputAmount;
@property CGPoint inputPoint; // ivar: inputPoint
@property float inputRotation; // ivar: inputRotation


-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)setDefaults;


@end


#endif