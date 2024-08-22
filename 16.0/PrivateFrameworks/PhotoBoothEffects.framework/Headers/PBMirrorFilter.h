// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBMIRRORFILTER_H
#define PBMIRRORFILTER_H



#import "PBFilter.h"

@interface PBMirrorFilter : PBFilter {
    float lastInputX;
    float lastInputY;
    float lastInputAngle;
    BOOL firstTime;
}


@property float inputOrientation; // ivar: inputOrientation
@property CGPoint inputPoint; // ivar: inputPoint


-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)setDefaults;


@end


#endif