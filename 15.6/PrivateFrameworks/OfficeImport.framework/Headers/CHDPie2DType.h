// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDPIE2DTYPE_H
#define CHDPIE2DTYPE_H



#import "CHDChartType.h"

@interface CHDPie2DType : CHDChartType {
    int mFirstSliceAngle;
    BOOL mDoughnutType;
    BOOL mPieOfPieType;
    BOOL mBarOfPieType;
}




-(BOOL)hasExplosion;
-(BOOL)isBarOfPieType;
-(BOOL)isDoughnutType;
-(BOOL)isPieOfPieType;
-(id)contentFormat;
-(id)initWithChart:(id)arg0 ;
-(int)defaultLabelPosition;
-(int)firstSliceAngle;
-(void)setBarOfPieType:(BOOL)arg0 ;
-(void)setDoughnutType:(BOOL)arg0 ;
-(void)setFirstSliceAngle:(int)arg0 ;
-(void)setPieOfPieType:(BOOL)arg0 ;


@end


#endif