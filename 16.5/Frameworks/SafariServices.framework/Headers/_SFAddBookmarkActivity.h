// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFADDBOOKMARKACTIVITY_H
#define _SFADDBOOKMARKACTIVITY_H

@class SFActivity;
@protocol _SFSingleBookmarkNavigationControllerDelegate;


#import "_SFSingleBookmarkNavigationController.h"

@interface _SFAddBookmarkActivity : SFActivity <_SFSingleBookmarkNavigationControllerDelegate>

 {
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}


@property (readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;


-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_embeddedActivityViewController;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)addBookmarkNavController:(id)arg0 didFinishWithResult:(BOOL)arg1 bookmark:(id)arg2 ;


@end


#endif