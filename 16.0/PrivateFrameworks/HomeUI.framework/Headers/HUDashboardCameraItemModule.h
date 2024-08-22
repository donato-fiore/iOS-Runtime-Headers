// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDCAMERAITEMMODULE_H
#define HUDASHBOARDCAMERAITEMMODULE_H

@class HFItemModule, HFCameraItemProvider, HMHome, HMRoom;


#import "HUDashboardContext.h"

@interface HUDashboardCameraItemModule : HFItemModule

@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider; // ivar: _cameraItemProvider
@property (retain, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HMRoom *room;


-(id)_reorderableHomeKitItemListKey;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;


@end


#endif