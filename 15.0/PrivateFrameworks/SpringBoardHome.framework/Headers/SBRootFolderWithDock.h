// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBROOTFOLDERWITHDOCK_H
#define SBROOTFOLDERWITHDOCK_H

@class NSString;
@protocol SBIconIndexNodeObserver;


#import "SBRootFolder.h"
#import "SBIconListModel.h"

@interface SBRootFolderWithDock : SBRootFolder <SBIconIndexNodeObserver>

 {
    SBIconListModel *_dock;
    SBIconListModel *_todayList;
    SBIconListModel *_favoriteTodayList;
    SBIconListModel *_ignoredList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsDock;
-(BOOL)supportsIgnoredList;
-(BOOL)supportsTodayList;
-(NSUInteger)allowedGridSizeClassesForDock;
-(NSUInteger)allowedGridSizeClassesForTodayList;
-(NSUInteger)columnCountForTodayList;
-(NSUInteger)maxIconCountForDock;
-(id)dock;
-(id)favoriteTodayList;
-(id)ignoredList;
-(id)todayList;
-(void)_notifyIndexChange:(int)arg0 identifiers:(id)arg1 withValidationBlock:(id)arg2 ;
-(void)_setDock:(id)arg0 ;
-(void)_setFavoriteTodayList:(id)arg0 ;
-(void)_setIgnoredList:(id)arg0 ;
-(void)_setTodayList:(id)arg0 ;
-(void)delegateDidChange:(id)arg0 ;
-(void)node:(id)arg0 didAddContainedNodeIdentifiers:(id)arg1 ;
-(void)node:(id)arg0 didRemoveContainedNodeIdentifiers:(id)arg1 ;
-(void)nodeDidMoveContainedNodes:(id)arg0 ;


@end


#endif