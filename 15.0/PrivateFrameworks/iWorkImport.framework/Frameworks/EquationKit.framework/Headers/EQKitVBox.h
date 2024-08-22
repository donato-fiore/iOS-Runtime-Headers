// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITVBOX_H
#define EQKITVBOX_H



#import "EQKitCompoundBox.h"

@interface EQKitVBox : EQKitCompoundBox

@property (readonly, nonatomic) NSUInteger pivotIndex; // ivar: mPivotIndex


-(BOOL)appendOpticalAlignToSpec:(*void)arg0 offset:(struct CGPoint )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)p_getTransform:(struct CGAffineTransform *)arg0 fromDescendant:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithChildBoxes:(id)arg0 ;
-(id)initWithChildBoxes:(id)arg0 pivotIndex:(NSUInteger)arg1 ;
-(struct CGRect )p_cacheErasableBounds;
-(void)p_cacheDimensionsForHeight:(*CGFloat)arg0 depth:(*CGFloat)arg1 width:(*CGFloat)arg2 ;
-(void)renderIntoContext:(struct CGContext *)arg0 offset:(struct CGPoint )arg1 ;


@end


#endif