// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPPATHGRADIENTBRUSH_H
#define MFPPATHGRADIENTBRUSH_H

@class NSArray;


#import "MFPGradientBrush.h"
#import "OITSUColor.h"
#import "OITSUBezierPath.h"

@interface MFPPathGradientBrush : MFPGradientBrush {
    OITSUColor *mCenterColor;
    CGPoint mCenterPoint;
    NSArray *mSurroundColors;
    OITSUBezierPath *mPath;
}




-(id)endColor;
-(id)startColor;
-(void)createShading;
-(void)setCenterColor:(id)arg0 ;
-(void)setCenterPoint:(struct CGPoint )arg0 ;
-(void)setPath:(id)arg0 ;
-(void)setSurroundColors:(id)arg0 ;


@end


#endif