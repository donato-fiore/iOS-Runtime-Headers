// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI21LIBRARYSIDEBARMANAGER_H
#define _TTC8VIDEOSUI21LIBRARYSIDEBARMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC8VideosUI21LibrarySideBarManager : NSObject {
    ? delegate;
    ? libraryOnly;
    ? libraryMenuDataSource;
    ? deviceMediaLibrary;
    ? initialFetchFinished;
    ? isLibraryOnlyCountryResolved;
    ? libraryOnlyCountry;
    ? stopped;
    ? $__lazy_storage_$_downloadItem;
    ? promptCategories;
    ? $__lazy_storage_$_promptItems;
    ? menuDataSourceBarItems;
    ? visibleBarItems;
    ? forcedUpdate;
    ? genresController;
    ? libraryViewController;
    ? rebaseFromLibraryViewController;
    ? categoryForRebase;
    ? categorylessRebase;
}




-(id)init;
-(void)dealloc;


@end


#endif