// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABGROUPLIBRARYSECTIONCONTROLLER_H
#define TABGROUPLIBRARYSECTIONCONTROLLER_H



#import "LibrarySectionController.h"

@interface TabGroupLibrarySectionController : LibrarySectionController {
    BOOL _showSyncedGroups;
}




-(id)initWithConfiguration:(id)arg0 forSyncedGroups:(BOOL)arg1 ;
-(id)itemControllers;


@end


#endif