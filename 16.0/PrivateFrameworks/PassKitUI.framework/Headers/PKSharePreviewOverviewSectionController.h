// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREPREVIEWOVERVIEWSECTIONCONTROLLER_H
#define PKSHAREPREVIEWOVERVIEWSECTIONCONTROLLER_H

@class PKPassEntitlementsComposer, NSArray;
@protocol PKSharePreviewOverviewSectionControllerDelegate;


#import "PKPassShareSectionController.h"
#import "PKPassShareInitiationContext.h"

@interface PKSharePreviewOverviewSectionController : PKPassShareSectionController {
    NSUInteger _mode;
    PKPassEntitlementsComposer *_entitlementComposer;
    NSArray *_recipientItems;
    NSArray *_entitlementItems;
}


@property (retain, nonatomic) PKPassShareInitiationContext *context; // ivar: _context
@property (readonly, weak, nonatomic) NSObject<PKSharePreviewOverviewSectionControllerDelegate> *delegate; // ivar: _delegate


-(id)_initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(id)_localizedEntitlementSummary;
-(id)decorateListCell:(id)arg0 forRowItem:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithInitiationContext:(id)arg0 entitlementComposer:(id)arg1 delegate:(id)arg2 ;
-(id)initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 delegate:(id)arg2 ;
-(id)sharedEntitlements;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_shareabilitySwitchValueChanged:(id)arg0 ;
-(void)didSelectItem:(id)arg0 ;
-(void)reloadItemsAnimated:(BOOL)arg0 ;


@end


#endif