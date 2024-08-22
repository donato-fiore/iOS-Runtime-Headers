// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADDTOFAVORITESUIACTIVITY_H
#define ADDTOFAVORITESUIACTIVITY_H

@class _SFSingleBookmarkNavigationController;
@protocol _SFSingleBookmarkNavigationControllerDelegate, AddBookmarkActivityDelegate;


#import "TabDocumentActivity.h"
#import "TabDocument.h"

@interface AddToFavoritesUIActivity : TabDocumentActivity <_SFSingleBookmarkNavigationControllerDelegate>

 {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}


@property (weak, nonatomic) NSObject<AddBookmarkActivityDelegate> *delegate;


-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)canPerformWithTabDocument:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)addBookmarkNavController:(id)arg0 didFinishWithResult:(BOOL)arg1 bookmark:(id)arg2 ;
-(void)prepareWithTabDocument:(id)arg0 ;


@end


#endif