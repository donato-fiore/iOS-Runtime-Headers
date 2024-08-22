// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FROMFRIENDSSECTIONCONTROLLER_H
#define FROMFRIENDSSECTIONCONTROLLER_H



#import "LibrarySectionController.h"
#import "FromFriendsLibraryItemController.h"

@interface FromFriendsSectionController : LibrarySectionController {
    FromFriendsLibraryItemController *_friendsItemController;
}




-(id)initWithConfiguration:(id)arg0 ;
-(id)itemControllers;
-(id)title;
-(void)registerItemsWithRegistration:(id)arg0 ;


@end


#endif