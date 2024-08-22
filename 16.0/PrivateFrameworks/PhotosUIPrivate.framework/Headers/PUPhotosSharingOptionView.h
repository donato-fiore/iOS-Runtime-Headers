// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSSHARINGOPTIONVIEW_H
#define PUPHOTOSSHARINGOPTIONVIEW_H

@class UICollectionReusableView, PXUIAssetBadgeView, NSString;
@protocol PXUIAssetBadgeViewDelegate;



@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate>

 {
    PXUIAssetBadgeView *_toggleGlyphButton;
    id *_target;
    SEL _action;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (readonly) Class superclass;
@property (nonatomic, getter=isToggled) BOOL toggled; // ivar: _toggled


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)assetBadgeView:(id)arg0 userDidSelectBadges:(NSUInteger)arg1 ;
-(void)layoutSubviews;
-(void)setTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif