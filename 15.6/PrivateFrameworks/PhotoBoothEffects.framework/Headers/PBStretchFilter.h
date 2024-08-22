// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBSTRETCHFILTER_H
#define PBSTRETCHFILTER_H



#import "PBFilter.h"

@interface PBStretchFilter : PBFilter {
    BOOL firstTime;
    float lastInputX;
    float lastInputY;
}


@property CGPoint inputPoint; // ivar: inputPoint


-(BOOL)needsWrapMirror;
-(id)ciFilterName;
-(void)applyParametersToCIFilter:(BOOL)arg0 extent:(struct CGRect )arg1 ;
-(void)setDefaults;


@end


#endif