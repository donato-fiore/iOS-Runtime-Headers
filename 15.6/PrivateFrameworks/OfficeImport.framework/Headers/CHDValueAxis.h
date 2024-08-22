// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDVALUEAXIS_H
#define CHDVALUEAXIS_H



#import "CHDAxis.h"

@interface CHDValueAxis : CHDAxis {
    BOOL mPercentageFormattingFlag;
    BOOL mAutoMajorUnitValue;
    BOOL mAutoMinorUnitValue;
    CGFloat mMajorUnitValue;
    CGFloat mMinorUnitValue;
    CGFloat mScalingLogBase;
    int mBuiltInUnit;
    BOOL mShowBuiltInUnit;
}




-(BOOL)isAutoMajorUnitValue;
-(BOOL)isAutoMinorUnitValue;
-(BOOL)isPercentageFormattingFlag;
-(BOOL)isShowBuiltInUnit;
-(CGFloat)majorUnitValue;
-(CGFloat)minorUnitValue;
-(CGFloat)scalingLogBase;
-(id)contentFormatWithBuiltInUnit;
-(id)initWithResources:(id)arg0 ;
-(int)builtInUnit;
-(void)adjustAxisPositionForHorizontalChart;
-(void)setBuiltInUnit:(int)arg0 ;
-(void)setMajorUnitValue:(CGFloat)arg0 ;
-(void)setMinorUnitValue:(CGFloat)arg0 ;
-(void)setPercentageFormattingFlag:(BOOL)arg0 ;
-(void)setScalingLogBase:(CGFloat)arg0 ;
-(void)setShowBuiltInUnitFlag:(BOOL)arg0 ;


@end


#endif