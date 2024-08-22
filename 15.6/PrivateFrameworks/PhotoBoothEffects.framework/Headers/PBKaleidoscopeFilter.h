// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBKALEIDOSCOPEFILTER_H
#define PBKALEIDOSCOPEFILTER_H



#import "PBFilter.h"

@interface PBKaleidoscopeFilter : PBFilter {
    BOOL firstTime;
    float _inputAmount;
    float lastInputX;
    float lastInputY;
    float lastInputSize;
    float lastInputDecay;
    float lastInputRotation;
}


@property float inputAmount;
@property CGPoint inputPoint; // ivar: inputPoint
@property float inputRotation; // ivar: inputRotation


-(BOOL)allowAbsoluteGestures;
-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)setDefaults;


@end


#endif