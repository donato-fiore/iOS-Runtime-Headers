// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBTWIRLFILTER_H
#define PBTWIRLFILTER_H



#import "PBFilter.h"

@interface PBTwirlFilter : PBFilter {
    BOOL firstTime;
    float _inputAmount;
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    float lastInputRadius;
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