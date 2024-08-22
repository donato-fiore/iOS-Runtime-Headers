// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSETUPACCESSORYOBWELCOMECONTROLLER_H
#define HUSETUPACCESSORYOBWELCOMECONTROLLER_H

@class HFItem<HFServiceLikeItem>;


#import "HUCenterFillOBWelcomeController.h"
#import "HUHomeAccessoryTileView.h"

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController

@property (readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView; // ivar: _homeAccessoryTileView
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;


-(CGFloat)_contentAspectRatio;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentView:(id)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 item:(id)arg3 ;


@end


#endif