// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBSQUEEZEFILTER_H
#define PBSQUEEZEFILTER_H



#import "PBFilter.h"

@interface PBSqueezeFilter : PBFilter {
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputScale;
    float _inputAmount;
    BOOL firstTime;
}


@property float inputAmount;
@property CGPoint inputPoint; // ivar: inputPoint


-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)setDefaults;


@end


#endif