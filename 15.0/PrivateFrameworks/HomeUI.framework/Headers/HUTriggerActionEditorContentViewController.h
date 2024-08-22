// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERACTIONEDITORCONTENTVIEWCONTROLLER_H
#define HUTRIGGERACTIONEDITORCONTENTVIEWCONTROLLER_H

@class NSString, UINavigationItem, NSSet, HFTriggerBuilder;
@protocol HUServiceGridItemManagerDelegate, HUTriggerEditorDelegate;


#import "HUSelectableServiceGridViewController.h"
#import "HUTriggerActionFlow.h"

@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UINavigationItem *effectiveNavigationItem; // ivar: _effectiveNavigationItem
@property (retain, nonatomic) NSSet *existingAnonActionSetMediaProfiles; // ivar: _existingAnonActionSetMediaProfiles
@property (retain, nonatomic) NSSet *existingSelectedActionSets; // ivar: _existingSelectedActionSets
@property (retain, nonatomic) NSSet *existingSelectedCharacteristics; // ivar: _existingSelectedCharacteristics
@property (retain, nonatomic) HUTriggerActionFlow *flow; // ivar: _flow
@property (nonatomic) NSUInteger forceDisableReasonsForSecureCharacteristicControl; // ivar: _forceDisableReasonsForSecureCharacteristicControl
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_canSelectMediaAccessoryItem:(id)arg0 ;
-(BOOL)canSelectItem:(id)arg0 indexPath:(id)arg1 ;
-(BOOL)serviceGridItemManager:(id)arg0 shouldHideItem:(id)arg1 ;
-(NSUInteger)_triggerForceDisableReasonsForActionItem:(id)arg0 ;
-(id)_updateTriggerBuilderActionSets;
-(id)_updateTriggerBuilderAnonymousActions;
-(id)initWithServiceGridItemManager:(id)arg0 ;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 effectiveNavigationItem:(id)arg2 delegate:(id)arg3 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_addActionSetItems:(id)arg0 toTriggerBuilder:(id)arg1 inHome:(id)arg2 ;
-(void)_cancel:(id)arg0 ;
-(void)_goToSummaryScreen:(id)arg0 ;
-(void)_next:(id)arg0 ;
-(void)_popAlertWithLocalizedTitle:(id)arg0 localizedMessage:(id)arg1 actions:(id)arg2 ;
-(void)_presentUnsupportedAlertWithTitle:(id)arg0 message:(id)arg1 ;
-(void)_removeDeletedActionSetsItems:(id)arg0 fromTriggerBuilder:(id)arg1 ;
-(void)_removeDeletedServiceItems:(id)arg0 fromTriggerBuilder:(id)arg1 ;
-(void)_setUpNavButtons;
-(void)_updateOrRemoveDeletedMediaItems:(id)arg0 fromTriggerBuilder:(id)arg1 ;
-(void)_updateSelectedServicesAndActionSets;
-(void)_validateDoneButton;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didChangeSelection;
-(void)goToSummaryScreen;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif