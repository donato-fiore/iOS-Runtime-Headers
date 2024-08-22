// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDDATEAXIS_H
#define CHDDATEAXIS_H



#import "CHDAxis.h"

@interface CHDDateAxis : CHDAxis {
    BOOL mAutomatic;
    CGFloat mMajorUnitValue;
    CGFloat mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}




-(BOOL)isAutomatic;
-(BOOL)isDate;
-(CGFloat)majorUnitValue;
-(CGFloat)minorUnitValue;
-(id)initWithResources:(id)arg0 ;
-(int)baseTimeUnit;
-(int)majorTimeUnit;
-(int)minorTimeUnit;
-(void)setAutomatic:(BOOL)arg0 ;
-(void)setBaseTimeUnit:(int)arg0 ;
-(void)setMajorTimeUnit:(int)arg0 ;
-(void)setMajorUnitValue:(CGFloat)arg0 ;
-(void)setMinorTimeUnit:(int)arg0 ;
-(void)setMinorUnitValue:(CGFloat)arg0 ;


@end


#endif