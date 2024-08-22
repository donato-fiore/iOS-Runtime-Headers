// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADADJUSTEDCOLOR_H
#define OADADJUSTEDCOLOR_H



#import "OADColor.h"

@interface OADAdjustedColor : OADColor {
    OADColor *mBaseColor;
    int mAdjustmentType;
    unsigned char mAdjustmentParam;
    BOOL mInvert;
    BOOL mInvert128;
    BOOL mGray;
}




-(BOOL)gray;
-(BOOL)invert;
-(BOOL)invert128;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)baseColor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBaseColor:(id)arg0 adjustmentType:(int)arg1 adjustmentParam:(unsigned char)arg2 invert:(BOOL)arg3 invert128:(BOOL)arg4 gray:(BOOL)arg5 ;
-(int)adjustmentType;
-(unsigned char)adjustmentParam;


@end


#endif