// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef READINGLISTLIBRARYITEMCONTROLLER_H
#define READINGLISTLIBRARYITEMCONTROLLER_H

@class NSString;
@protocol ReadingListViewControllerDelegate;


#import "LibraryItemController.h"
#import "ReadingListViewController.h"

@interface ReadingListLibraryItemController : LibraryItemController <ReadingListViewControllerDelegate>

 {
    ReadingListViewController *_viewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSpringLoaded;
-(BOOL)selectionFollowsFocus;
-(NSInteger)dropIntentForSession:(id)arg0 ;
-(NSUInteger)dropOperationForSession:(id)arg0 ;
-(id)_bookmarksNavigationControllerDelegate;
-(id)readingListViewControllerCurrentReadingListItem:(id)arg0 ;
-(id)viewController;
-(void)performDropWithProposal:(id)arg0 session:(id)arg1 ;
-(void)readingListViewController:(id)arg0 setBookmark:(id)arg1 asRead:(BOOL)arg2 ;
-(void)readingListViewController:(id)arg0 updateUnreadFilterShowingAllBookmarks:(BOOL)arg1 ;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif