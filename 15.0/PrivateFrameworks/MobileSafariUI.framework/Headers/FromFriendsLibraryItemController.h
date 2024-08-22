// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FROMFRIENDSLIBRARYITEMCONTROLLER_H
#define FROMFRIENDSLIBRARYITEMCONTROLLER_H

@class UIViewController;


#import "LibraryItemController.h"

@interface FromFriendsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}




-(BOOL)isHidden;
-(BOOL)isSelected;
-(id)viewController;
-(void)didSelectItem;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif