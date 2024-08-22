// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHAREDWITHYOULIBRARYITEMCONTROLLER_H
#define SHAREDWITHYOULIBRARYITEMCONTROLLER_H

@class UIViewController;


#import "LibraryItemController.h"

@interface SharedWithYouLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}




-(BOOL)isHidden;
-(BOOL)isSelected;
-(id)viewController;
-(void)didSelectItem;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif