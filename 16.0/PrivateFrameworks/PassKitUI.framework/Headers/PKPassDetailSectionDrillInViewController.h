// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSDETAILSECTIONDRILLINVIEWCONTROLLER_H
#define PKPASSDETAILSECTIONDRILLINVIEWCONTROLLER_H



#import "PKDynamicTableViewController.h"
#import "PKConfigurablePassDetailSectionsController.h"

@interface PKPassDetailSectionDrillInViewController : PKDynamicTableViewController {
    PKConfigurablePassDetailSectionsController *_sectionController;
}




-(id)initWithPass:(id)arg0 field:(id)arg1 useBridgeStyle:(BOOL)arg2 isShowingSecureInformation:(BOOL)arg3 ;


@end


#endif