// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXUIOVERLAYBADGESVIEW_H
#define PXUIOVERLAYBADGESVIEW_H

@class UIView, UIImageView, NSDictionary, UIStackView;



@interface PXUIOverlayBadgesView : UIView

@property (weak, nonatomic) UIImageView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NSDictionary *badges; // ivar: _badges
@property (nonatomic) BOOL isShowingAnyBadge; // ivar: _isShowingAnyBadge
@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


+(id)defaultBadges;
+(id)defaultOrder;
+(id)defaultViewForBadge:(NSInteger)arg0 ;
-(id)createWeaklyReferencedBackgroundView;
-(id)init;
-(id)initWithBadges:(id)arg0 order:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)showBadges:(id)arg0 ;
-(void)showBadgesForPHAsset:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif