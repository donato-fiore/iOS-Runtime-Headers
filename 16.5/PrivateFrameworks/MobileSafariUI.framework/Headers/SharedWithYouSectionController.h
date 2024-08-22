// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHAREDWITHYOUSECTIONCONTROLLER_H
#define SHAREDWITHYOUSECTIONCONTROLLER_H



#import "LibrarySectionController.h"
#import "CloudTabsLibraryItemController.h"
#import "SharedWithYouLibraryItemController.h"

@interface SharedWithYouSectionController : LibrarySectionController {
    CloudTabsLibraryItemController *_cloudTabsItemController;
    SharedWithYouLibraryItemController *_friendsItemController;
}




-(id)initWithConfiguration:(id)arg0 ;
-(id)itemControllers;
-(id)title;
-(void)registerItemsWithRegistration:(id)arg0 ;


@end


#endif