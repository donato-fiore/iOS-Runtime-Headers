// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPSWITCHERMODEL_H
#define SBAPPSWITCHERMODEL_H

@class NSString;
@protocol SBRecentAppLayoutsDelegate, SBAppSwitcherModelDelegate;

#import <Foundation/Foundation.h>

#import "SBIconController.h"
#import "SBRecentAppLayouts.h"

@interface SBAppSwitcherModel : NSObject <SBRecentAppLayoutsDelegate>

 {
    SBIconController *_iconController;
    SBRecentAppLayouts *_recents;
    id *_recentsChangedNotificationObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBAppSwitcherModelDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)appSwitcherHeaderIconImageDescriptorName;
-(NSInteger)_adjustedIndexForVisibleAppLayoutAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfDisplayItem:(id)arg0 visible:(BOOL)arg1 ;
-(id)_recentAppLayoutsController;
-(id)appLayoutContainingDisplayItem:(id)arg0 includingHiddenAppLayouts:(BOOL)arg1 ;
-(id)appLayoutsForBundleIdentifier:(id)arg0 includingHiddenAppLayouts:(BOOL)arg1 ;
-(id)appLayoutsIncludingHiddenAppLayouts:(BOOL)arg0 ;
-(id)init;
-(id)initWithIconController:(id)arg0 applicationController:(id)arg1 recents:(id)arg2 ;
-(id)recentAppLayouts:(id)arg0 willAddAppLayout:(id)arg1 replacingAppLayouts:(id)arg2 removingAppLayouts:(id)arg3 ;
-(id)recentAppLayouts:(id)arg0 willReplaceAppLayout:(id)arg1 proposedReplacementAppLayout:(id)arg2 ;
-(id)recentDisplayItemsForBundleIdentifier:(id)arg0 includingHiddenAppLayouts:(BOOL)arg1 ;
-(void)_warmUpIconsForAppLayout:(id)arg0 ;
-(void)_warmUpIconsForRecentAppLayouts:(id)arg0 ;
-(void)addAppLayout:(id)arg0 afterAppLayout:(id)arg1 ;
-(void)addAppLayout:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)addToFront:(id)arg0 ;
-(void)dealloc;
-(void)hide:(id)arg0 ;
-(void)modifyWithDropContext:(id)arg0 ;
-(void)recentAppLayouts:(id)arg0 didRemoveAppLayoutForFallingOffList:(id)arg1 ;
-(void)remove:(id)arg0 ;
-(void)removeAppLayouts:(id)arg0 ;
-(void)replaceAppLayout:(id)arg0 withAppLayout:(id)arg1 ;


@end


#endif