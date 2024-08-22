// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKUPNEXTCOLLECTIONVIEWFLOWLAYOUTATTRIBUTES_H
#define NTKUPNEXTCOLLECTIONVIEWFLOWLAYOUTATTRIBUTES_H

@class UICollectionViewLayoutAttributes;



@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) CGRect computedFrame; // ivar: _computedFrame
@property (nonatomic) CGFloat darkeningAlphaUniform; // ivar: _darkeningAlphaUniform
@property (nonatomic) BOOL fullyVisibleToUser; // ivar: _fullyVisibleToUser
@property (nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (nonatomic) BOOL notVisibleToUser; // ivar: _notVisibleToUser
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (nonatomic) CGRect unitFrameOnScreen; // ivar: _unitFrameOnScreen


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif