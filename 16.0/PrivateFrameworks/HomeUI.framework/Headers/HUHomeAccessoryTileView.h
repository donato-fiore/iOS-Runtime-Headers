// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMEACCESSORYTILEVIEW_H
#define HUHOMEACCESSORYTILEVIEW_H

@class UIView, UIImageView, HFItem<HFServiceLikeItem>;


#import "HUGridServiceCell.h"

@interface HUHomeAccessoryTileView : UIView

@property (readonly, nonatomic) CGFloat aspectRatio;
@property (readonly, nonatomic) UIImageView *homeView; // ivar: _homeView
@property (readonly, nonatomic) BOOL iconOnlyTile; // ivar: _iconOnlyTile
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;
@property (readonly, nonatomic) HUGridServiceCell *tileView; // ivar: _tileView


-(id)initWithFrame:(struct CGRect )arg0 categoryType:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 item:(id)arg1 iconOnlyTile:(BOOL)arg2 ;
-(void)layoutSubviews;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif