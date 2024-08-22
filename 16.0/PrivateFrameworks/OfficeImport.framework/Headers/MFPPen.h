// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPPEN_H
#define MFPPEN_H

@class MFPCustomLineCap;

#import <Foundation/Foundation.h>

#import "MFPBrush.h"

@interface MFPPen : NSObject {
    MFPBrush *mBrush;
    float mWidth;
    CGAffineTransform mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    *float mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    *float mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}




-(*float)compoundArray;
-(*float)dashPattern;
-(float)dashOffset;
-(float)miterLimit;
-(float)width;
-(id)brush;
-(id)customEndCap;
-(id)customStartCap;
-(id)init;
-(int)alignment;
-(int)compoundArrayCount;
-(int)dashCap;
-(int)dashPatternCount;
-(int)dashStyle;
-(int)endCap;
-(int)lineJoin;
-(int)startCap;
-(struct CGAffineTransform )transform;
-(void)applyDashCapToPath:(id)arg0 ;
-(void)applyDashPatternToPath:(id)arg0 ;
-(void)applyLineCapToPath:(id)arg0 ;
-(void)applyLineJoinToPath:(id)arg0 ;
-(void)dealloc;
-(void)setAlignment:(int)arg0 ;
-(void)setBrush:(id)arg0 ;
-(void)setCompoundArray:(*float)arg0 count:(int)arg1 ;
-(void)setCustomEndCap:(id)arg0 ;
-(void)setCustomStartCap:(id)arg0 ;
-(void)setDashCap:(int)arg0 ;
-(void)setDashOffset:(float)arg0 ;
-(void)setDashPattern:(*float)arg0 count:(int)arg1 ;
-(void)setDashPattern:(*float)arg0 count:(int)arg1 toPath:(id)arg2 ;
-(void)setDashStyle:(int)arg0 ;
-(void)setEndCap:(int)arg0 ;
-(void)setLineJoin:(int)arg0 ;
-(void)setMiterLimit:(float)arg0 ;
-(void)setStartCap:(int)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)setWidth:(float)arg0 ;
-(void)strokePath:(id)arg0 ;


@end


#endif