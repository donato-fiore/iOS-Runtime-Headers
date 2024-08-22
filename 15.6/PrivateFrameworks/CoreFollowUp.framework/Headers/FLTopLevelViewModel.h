// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLTOPLEVELVIEWMODEL_H
#define FLTOPLEVELVIEWMODEL_H

@class NSString, NSMutableDictionary;
@protocol FLViewModel;

#import <Foundation/Foundation.h>

#import "FLFollowUpController.h"
#import "FLItemChangeObserver.h"

@interface FLTopLevelViewModel : NSObject <FLViewModel>

 {
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_timersByID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *localizedDeviceRowTitle; // ivar: _localizedDeviceRowTitle
@property (readonly) Class superclass;


+(id)_prefixFromBundleIdentifier:(id)arg0 ;
+(id)redirectURLForItem:(id)arg0 withAction:(id)arg1 ;
-(id)allPendingItems;
-(id)extensionToItemMapFromItems:(id)arg0 ;
-(id)groups;
-(id)groupsForPrimaryAccount:(id)arg0 secondaryAccounts:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 controller:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_configureTimerForItem:(id)arg0 ;
-(void)_refreshItemsWithExtensionToItemMap:(id)arg0 completion:(id)arg1 ;
-(void)_removeTimerForItem:(id)arg0 ;
-(void)_updateTimerItems:(id)arg0 ;
-(void)dealloc;
-(void)mapItems:(id)arg0 toGroups:(id)arg1 unknownGroup:(id)arg2 deviceGroup:(id)arg3 ;
-(void)refreshItems:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)refreshItemsForItem:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setItemChangeHandler:(id)arg0 ;


@end


#endif