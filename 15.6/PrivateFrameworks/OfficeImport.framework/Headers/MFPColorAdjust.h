// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPCOLORADJUST_H
#define MFPCOLORADJUST_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "OITSUColor.h"

@interface MFPColorAdjust : NSObject {
    *MFPColorMatrix mColorMatrix;
    *MFPColorMatrix mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}




-(BOOL)isEnabled;
-(float)gamma;
-(float)threshold;
-(id)init;
-(id)recolorMap;
-(id)transparentHigh;
-(id)transparentLow;
-(int)colorMatrixFlags;
-(struct MFPColorMatrix *)colorMatrix;
-(struct MFPColorMatrix *)grayMatrix;
-(void)dealloc;
-(void)setColorMatrix:(struct MFPColorMatrix *)arg0 ;
-(void)setColorMatrixFlags:(int)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setGamma:(float)arg0 ;
-(void)setGrayMatrix:(struct MFPColorMatrix *)arg0 ;
-(void)setRecolorMap:(id)arg0 ;
-(void)setThreshold:(float)arg0 ;
-(void)setTransparentLow:(id)arg0 high:(id)arg1 ;


@end


#endif