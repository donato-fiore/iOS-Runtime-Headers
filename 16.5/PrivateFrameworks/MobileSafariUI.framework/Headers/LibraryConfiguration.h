// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIBRARYCONFIGURATION_H
#define LIBRARYCONFIGURATION_H

@protocol BookmarksNavigationControllerDelegate, DownloadOpenHandler, LibraryItemOpenHandler, LinkPreviewProvider, _SFNavigationIntentHandling, TabGroupProvider;

#import <Foundation/Foundation.h>

#import "PinnedTabsManager.h"

@interface LibraryConfiguration : NSObject

@property (weak, nonatomic) NSObject<BookmarksNavigationControllerDelegate> *bookmarksNavigationControllerDelegate; // ivar: _bookmarksNavigationControllerDelegate
@property (weak, nonatomic) NSObject<DownloadOpenHandler> *downloadOpenHandler; // ivar: _downloadOpenHandler
@property (weak, nonatomic) NSObject<LibraryItemOpenHandler> *libraryItemOpenHandler; // ivar: _libraryItemOpenHandler
@property (weak, nonatomic) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak, nonatomic) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (weak, nonatomic) PinnedTabsManager *pinnedTabsManager; // ivar: _pinnedTabsManager
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider




@end


#endif