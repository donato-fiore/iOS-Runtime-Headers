// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUCONTROLCENTERCOLLECTIONVIEWCELL_H
#define MRUCONTROLCENTERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString, UIView;
@protocol UIPointerInteractionDelegate;


#import "MRUNowPlayingCellContentView.h"
#import "MediaControlsMaterialView.h"

@interface MRUControlCenterCollectionViewCell : UICollectionViewCell <UIPointerInteractionDelegate>



@property (readonly, nonatomic) MRUNowPlayingCellContentView *cellContentView; // ivar: _cellContentView
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MediaControlsMaterialView *materialView; // ivar: _materialView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *transformView; // ivar: _transformView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTransitionTransform:(struct CGAffineTransform )arg0 isVisible:(BOOL)arg1 ;


@end


#endif