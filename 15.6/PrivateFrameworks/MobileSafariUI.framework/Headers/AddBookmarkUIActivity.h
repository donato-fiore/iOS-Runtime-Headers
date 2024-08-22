// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADDBOOKMARKUIACTIVITY_H
#define ADDBOOKMARKUIACTIVITY_H

@class SFAddBookmarkActivity, _SFSingleBookmarkNavigationController;
@protocol _SFSingleBookmarkNavigationControllerDelegate, AddBookmarkActivityDelegate;


#import "TabDocument.h"

@interface AddBookmarkUIActivity : SFAddBookmarkActivity <_SFSingleBookmarkNavigationControllerDelegate>

 {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}


@property (weak, nonatomic) NSObject<AddBookmarkActivityDelegate> *delegate;


-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)activityViewController;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)addBookmarkNavController:(id)arg0 didFinishWithResult:(BOOL)arg1 bookmark:(id)arg2 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif