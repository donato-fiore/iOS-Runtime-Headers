// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEARBYACCESSORIESEDITORSERVICEGRIDVIEWCONTROLLER_H
#define HUNEARBYACCESSORIESEDITORSERVICEGRIDVIEWCONTROLLER_H

@class NSString, HFItemManager, HMAccessory;
@protocol HUServiceGridItemManagerDelegate;


#import "HUSelectableServiceGridViewController.h"

@interface HUNearbyAccessoriesEditorServiceGridViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFItemManager *itemManager;
@property (retain, nonatomic) HMAccessory *primaryAccessory; // ivar: _primaryAccessory
@property (readonly) Class superclass;


+(id)defaultItemProviderCreatorWithOptions:(SEL)arg0 accessoryProfileItem:(NSUInteger)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(id)initWithAccessoryProfileSourceItem:(id)arg0 ;


@end


#endif