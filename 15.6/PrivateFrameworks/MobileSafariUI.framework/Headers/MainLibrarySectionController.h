// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAINLIBRARYSECTIONCONTROLLER_H
#define MAINLIBRARYSECTIONCONTROLLER_H



#import "LibrarySectionController.h"
#import "HistoryLibraryItemController.h"
#import "ReadingListLibraryItemController.h"
#import "BookmarkFolderLibraryItemController.h"

@interface MainLibrarySectionController : LibrarySectionController {
    HistoryLibraryItemController *_historyController;
    ReadingListLibraryItemController *_readingListController;
    BookmarkFolderLibraryItemController *_bookmarksItemController;
}




-(id)initWithConfiguration:(id)arg0 ;
-(id)itemControllers;
-(id)title;
-(void)registerItemsWithRegistration:(id)arg0 ;
-(void)updateToolbarIfNeeded;


@end


#endif