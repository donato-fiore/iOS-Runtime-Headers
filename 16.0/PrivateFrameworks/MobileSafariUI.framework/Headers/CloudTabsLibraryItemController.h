// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLOUDTABSLIBRARYITEMCONTROLLER_H
#define CLOUDTABSLIBRARYITEMCONTROLLER_H

@class UIViewController;


#import "LibraryItemController.h"

@interface CloudTabsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}




-(BOOL)isHidden;
-(BOOL)isSelected;
-(id)viewController;
-(void)didSelectItem;
-(void)updateListContentConfiguration:(id)arg0 ;


@end


#endif