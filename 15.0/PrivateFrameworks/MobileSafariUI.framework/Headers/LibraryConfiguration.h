// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIBRARYCONFIGURATION_H
#define LIBRARYCONFIGURATION_H

@protocol BookmarksNavigationControllerDelegate, DownloadOpenHandler, LibraryItemOpenHandler, LinkPreviewProvider, _SFNavigationIntentHandling, TabGroupProvider;

#import <Foundation/Foundation.h>


@interface LibraryConfiguration : NSObject

@property (weak) NSObject<BookmarksNavigationControllerDelegate> *bookmarksNavigationControllerDelegate; // ivar: _bookmarksNavigationControllerDelegate
@property (weak) NSObject<DownloadOpenHandler> *downloadOpenHandler; // ivar: _downloadOpenHandler
@property (weak) NSObject<LibraryItemOpenHandler> *libraryItemOpenHandler; // ivar: _libraryItemOpenHandler
@property (weak) NSObject<LinkPreviewProvider> *linkPreviewProvider; // ivar: _linkPreviewProvider
@property (weak) NSObject<_SFNavigationIntentHandling> *navigationIntentHandler; // ivar: _navigationIntentHandler
@property (weak) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider




@end


#endif