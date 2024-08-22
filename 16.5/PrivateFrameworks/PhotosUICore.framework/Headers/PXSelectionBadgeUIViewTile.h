// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSELECTIONBADGEUIVIEWTILE_H
#define PXSELECTIONBADGEUIVIEWTILE_H

@class UIView, NSString;
@protocol PXReusableObject, PXUIViewBasicTile;



@interface PXSelectionBadgeUIViewTile : UIView <PXReusableObject, PXUIViewBasicTile>

 {
    BOOL _needsUpdate;
    UIView *_selectedView;
    UIView *_unselectedView;
}


@property (nonatomic, setter=_setSelected:) BOOL _selected; // ivar: __selected
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


+(struct CGSize )preferredSize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_invalidate;
-(void)_showSelectedView;
-(void)_showUnselectedView;
-(void)_updateBadgeViewIfNeeded;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif