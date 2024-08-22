// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITCOMPOUNDBOX_H
#define EQKITCOMPOUNDBOX_H

@class NSArray;


#import "EQKitBox.h"

@interface EQKitCompoundBox : EQKitBox {
    CGFloat mHeight;
    CGFloat mDepth;
    CGFloat mWidth;
    BOOL mDimensionsValid;
    CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
}


@property (readonly, nonatomic) NSArray *childBoxes; // ivar: mChildBoxes
@property (readonly, nonatomic) CGFloat depth;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) CGFloat width;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChildBoxes:(id)arg0 ;
-(struct CGRect )erasableBounds;
-(struct CGRect )p_cacheErasableBounds;
-(void)dealloc;
-(void)p_cacheDimensionsForHeight:(*CGFloat)arg0 depth:(*CGFloat)arg1 width:(*CGFloat)arg2 ;


@end


#endif