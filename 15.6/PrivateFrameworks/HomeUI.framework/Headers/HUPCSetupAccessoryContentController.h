// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPCSETUPACCESSORYCONTENTCONTROLLER_H
#define HUPCSETUPACCESSORYCONTENTCONTROLLER_H

@class HFItem<HFServiceLikeItem>;


#import "HUPCCenterFillContentController.h"
#import "HUHomeAccessoryTileView.h"

@interface HUPCSetupAccessoryContentController : HUPCCenterFillContentController

@property (readonly, nonatomic) HUHomeAccessoryTileView *homeAccessoryTileView; // ivar: _homeAccessoryTileView
@property (readonly, nonatomic) HFItem<HFServiceLikeItem> *item;


-(CGFloat)_contentAspectRatio;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 item:(id)arg2 ;


@end


#endif