// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSENTITLEMENTSELECTIONSECTIONCONTROLLER_H
#define PKPASSENTITLEMENTSELECTIONSECTIONCONTROLLER_H

@class NSArray, NSMutableDictionary, NSDictionary, PKPassEntitlementsComposer;
@protocol PKPassEntitlementSelectionSectionControllerDelegate;


#import "PKPassShareSectionController.h"

@interface PKPassEntitlementSelectionSectionController : PKPassShareSectionController {
    NSUInteger _mode;
    NSArray *_shareableEntitlements;
    NSMutableDictionary *_selectedEntitlements;
    NSUInteger _maxEntitlementSelectionCount;
    NSDictionary *_groupedEntitlements;
    NSMutableDictionary *_toggleTags;
    PKPassEntitlementsComposer *_entitlementComposer;
}


@property (weak, nonatomic) NSObject<PKPassEntitlementSelectionSectionControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)shouldHighlightItem:(id)arg0 ;
-(id)decorateListCell:(id)arg0 forEntitlementEntry:(id)arg1 ;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 entitlementComposer:(id)arg1 maxEntitlementSelectionCount:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_clearEntitlementSelectionAnimated:(BOOL)arg0 ;
-(void)_clearEntitlementSelectionInGroup:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateEntitlementGroups;
-(void)didSelectItem:(id)arg0 ;
-(void)toggleValueChanged:(id)arg0 ;


@end


#endif