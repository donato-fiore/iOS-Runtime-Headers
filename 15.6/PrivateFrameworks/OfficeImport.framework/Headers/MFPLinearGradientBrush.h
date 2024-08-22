// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPLINEARGRADIENTBRUSH_H
#define MFPLINEARGRADIENTBRUSH_H



#import "MFPGradientBrush.h"
#import "OITSUColor.h"

@interface MFPLinearGradientBrush : MFPGradientBrush {
    CGRect mBounds;
    OITSUColor *mStartColor;
    OITSUColor *mEndColor;
}




-(id)endColor;
-(id)startColor;
-(void)createShading;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setEndColor:(id)arg0 ;
-(void)setStartColor:(id)arg0 ;


@end


#endif