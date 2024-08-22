// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVCOLLECTIONVIEWFLOWLAYOUT_H
#define _TVCOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionViewFlowLayout;



@interface _TVCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic, getter=isHeterogeneous) BOOL heterogeneous; // ivar: _heterogeneous


-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(CGFloat)contentHeightThatFitsItemCount:(NSInteger)arg0 expectedWidth:(CGFloat)arg1 ;
-(NSInteger)developmentLayoutDirection;
-(id)init;
-(id)invalidationContextForBoundsChange:(struct CGRect )arg0 ;


@end


#endif