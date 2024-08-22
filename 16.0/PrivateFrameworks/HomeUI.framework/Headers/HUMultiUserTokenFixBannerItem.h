// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMULTIUSERTOKENFIXBANNERITEM_H
#define HUMULTIUSERTOKENFIXBANNERITEM_H

@class ACAccount;


#import "HUBannerItem.h"

@interface HUMultiUserTokenFixBannerItem : HUBannerItem

@property (nonatomic) BOOL forceHidden; // ivar: _forceHidden
@property (retain, nonatomic) ACAccount *homeMediaAccount; // ivar: _homeMediaAccount


-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif