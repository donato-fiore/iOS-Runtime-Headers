// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSTABGROUPTOUCHICONPROVIDER_H
#define WBSTABGROUPTOUCHICONPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol WBTabGroupManagerObserver;


#import "WBSBookmarkFolderTouchIconProvider.h"

@interface WBSTabGroupTouchIconProvider : WBSBookmarkFolderTouchIconProvider <WBTabGroupManagerObserver>

 {
    NSMutableDictionary *_tabGroupIconMetadataCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canHandleRequest:(id)arg0 ;
-(id)backgroundColor;
-(id)bookmarkUUIDForRequest:(id)arg0 ;
-(id)configuration;
-(id)defaultFolderIconForRequest:(id)arg0 ;
-(id)displayableFolderContentsForRequest:(id)arg0 ;
-(id)iconForTabGroup:(id)arg0 ;
-(id)init;
-(id)touchIconRequestForBookmark:(id)arg0 inFolderWithRequest:(id)arg1 ;
-(void)_cancelRequestsAndClearCacheForTabGroup:(id)arg0 ;
-(void)_cancelRequestsAndClearCacheForTabGroup:(id)arg0 metadata:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didRemoveTabGroupWithUUID:(id)arg1 ;
-(void)tabGroupManager:(id)arg0 didUpdateTabsInTabGroupWithUUID:(id)arg1 ;
-(void)updateIconForTabGroupIfNeeded:(id)arg0 ;


@end


#endif