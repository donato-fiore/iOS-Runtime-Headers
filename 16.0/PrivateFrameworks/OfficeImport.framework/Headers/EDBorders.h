// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDBORDERS_H
#define EDBORDERS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "EDResources.h"

@interface EDBorders : NSObject <NSCopying>

 {
    EDResources *mResources;
    NSUInteger mLeftBorderIndex;
    NSUInteger mRightBorderIndex;
    NSUInteger mTopBorderIndex;
    NSUInteger mBottomBorderIndex;
    NSUInteger mDiagonalBorderIndex;
    NSUInteger mVerticalBorderIndex;
    NSUInteger mHorizontalBorderIndex;
}




+(id)bordersWithLeft:(id)arg0 right:(id)arg1 top:(id)arg2 bottom:(id)arg3 diagonal:(id)arg4 resources:(id)arg5 ;
+(id)bordersWithLeft:(id)arg0 right:(id)arg1 top:(id)arg2 bottom:(id)arg3 diagonal:(id)arg4 vertical:(id)arg5 horizontal:(id)arg6 resources:(id)arg7 ;
+(id)bordersWithResources:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBorders:(id)arg0 ;
-(NSUInteger)hash;
-(id)bottomBorder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diagonalBorder;
-(id)horizontalBorder;
-(id)initWithResources:(id)arg0 ;
-(id)leftBorder;
-(id)rightBorder;
-(id)topBorder;
-(id)verticalBorder;
-(void)setBottomBorder:(id)arg0 ;
-(void)setDiagonalBorder:(id)arg0 ;
-(void)setHorizontalBorder:(id)arg0 ;
-(void)setLeftBorder:(id)arg0 ;
-(void)setRightBorder:(id)arg0 ;
-(void)setTopBorder:(id)arg0 ;
-(void)setVerticalBorder:(id)arg0 ;


@end


#endif