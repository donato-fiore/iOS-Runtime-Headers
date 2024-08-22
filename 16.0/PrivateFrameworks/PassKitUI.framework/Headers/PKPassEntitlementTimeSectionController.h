// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSENTITLEMENTTIMESECTIONCONTROLLER_H
#define PKPASSENTITLEMENTTIMESECTIONCONTROLLER_H

@class PKPassEntitlementsComposer;
@protocol PKPassEntitlementTimeSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassEntitlementTimeSectionController : PKPassShareSectionController {
    NSUInteger _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    id<PKPassEntitlementTimeSectionControllerDelegate> *_delegate;
}




-(id)_summaryForTimeConfiguration:(id)arg0 isUsingAdvancedSchedules:(BOOL)arg1 ;
-(id)decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 delegate:(id)arg2 ;
-(void)didSelectItem:(id)arg0 ;
-(void)reloadItemsAnimated:(BOOL)arg0 ;


@end


#endif