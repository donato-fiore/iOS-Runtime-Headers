// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFSINGLEBOOKMARKNAVIGATIONCONTROLLER_H
#define _SFSINGLEBOOKMARKNAVIGATIONCONTROLLER_H

@class UINavigationController, WebBookmarkCollection, NSString;
@protocol _SFBookmarkInfoViewControllerDelegate, _SFSingleBookmarkNavigationControllerDelegate, TabGroupProvider;


#import "_SFBookmarkInfoViewController.h"

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate>

 {
    _SFBookmarkInfoViewController *_infoViewController;
    WebBookmarkCollection *_collection;
    BOOL _delegateNotifiedOfResult;
    BOOL _bookmarkCollectionLocked;
    BOOL _needsBookmarksLockOnAppResume;
}


@property (copy, nonatomic) id *addBookmarkAnalyticsHandler; // ivar: _addBookmarkAnalyticsHandler
@property (weak, nonatomic) NSObject<_SFSingleBookmarkNavigationControllerDelegate> *bookmarkNavDelegate; // ivar: _bookmarkNavDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<TabGroupProvider> *tabGroupProvider; // ivar: _tabGroupProvider


-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg0 ;
-(BOOL)prepareForPresentationForAddingBookmark:(BOOL)arg0 ;
-(id)_initWithBookmark:(id)arg0 childBookmarks:(id)arg1 inCollection:(id)arg2 withSyntheticFolder:(id)arg3 addingBookmark:(BOOL)arg4 toFavorites:(BOOL)arg5 ;
-(id)_lastSelectedFolder;
-(id)addBookmarkWithTitle:(id)arg0 address:(id)arg1 parentBookmark:(id)arg2 ;
-(id)initForAddingToFavoritesInCollection:(id)arg0 ;
-(id)initForAddingToSyntheticBookmarkFolder:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 inCollection:(id)arg1 ;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithFolderOfBookmarks:(id)arg0 inCollection:(id)arg1 ;
-(id)tabGroupProviderForBookmarkInfoViewController:(id)arg0 ;
-(void)_didBecomeActive;
-(void)_releaseBookmarkLockIfNeeded;
-(void)_willResignActive;
-(void)bookmarkInfoViewController:(id)arg0 didFinishWithResult:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif