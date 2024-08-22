// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHAREDWITHYOULIBRARYITEMCONTROLLER_H
#define SHAREDWITHYOULIBRARYITEMCONTROLLER_H

@class UIViewController;


#import "LibraryItemController.h"

@interface SharedWithYouLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}




-(BOOL)isSelected;
-(id)viewController;
-(void)didSelectItem;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif