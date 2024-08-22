// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBREADONLYTABCOLLECTION_H
#define WBREADONLYTABCOLLECTION_H

@class NSString, NSArray;
@protocol WBStateProvider;

#import <Foundation/Foundation.h>

#import "WBTabCollection.h"
#import "WBBrowserState.h"
#import "WBWindowState.h"

@interface WBReadonlyTabCollection : NSObject <WBStateProvider>

 {
    WBTabCollection *_collection;
}


@property (readonly, nonatomic) WBBrowserState *browserState;
@property (readonly, nonatomic, getter=hasCompletedMigration) BOOL completedMigration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBWindowState *lastClosedWindowState;
@property (readonly, nonatomic) WBBrowserState *lastSessionBrowserState;
@property (nonatomic) NSUInteger maximumTabsPerGroup;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) int pinnedTabsFolderID;
@property (readonly, nonatomic) int privatePinnedTabsFolderID;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedTabs;
@property (readonly, copy, nonatomic) NSArray *recentlyClosedWindowStates;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *tabGroups;
@property (readonly, copy, nonatomic) NSArray *windowStates;


-(id)init;
-(id)tabGroupWithUUID:(id)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(id)tabsForTabGroup:(id)arg0 ;
-(id)windowStateWithUUID:(id)arg0 ;


@end


#endif