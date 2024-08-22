// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERTYPEPICKERVIEWCONTROLLER_H
#define HUTRIGGERTYPEPICKERVIEWCONTROLLER_H

@class HFActionSetBuilder, NSArray, NSString;
@protocol HURecommendedTriggerItemModuleControllerDelegate, HUTriggerEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerTypePickerItemManager.h"
#import "HURecommendedTriggerItemModuleController.h"

@interface HUTriggerTypePickerViewController : HUItemTableViewController <HURecommendedTriggerItemModuleControllerDelegate, HUTriggerEditorDelegate>



@property (retain, nonatomic) HFActionSetBuilder *actionSetBuilder; // ivar: _actionSetBuilder
@property (retain, nonatomic) NSArray *anonymousActionBuilders; // ivar: _anonymousActionBuilders
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUTriggerTypePickerItemManager *itemManager;
@property (readonly, weak, nonatomic) HURecommendedTriggerItemModuleController *recommendationModuleController; // ivar: _recommendationModuleController
@property (nonatomic) BOOL showSuggestedAutomations;
@property (readonly) Class superclass;


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)triggerEditor:(id)arg0 shouldCommitTriggerBuilder:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_createTriggerBuilderOfClass:(Class)arg0 ;
-(id)_createTriggerEditorForItem:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithActionSetBuilder:(id)arg0 anonymousActionBuilders:(id)arg1 delegate:(id)arg2 ;
-(id)initWithActionSetBuilder:(id)arg0 delegate:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)recommendedTriggerModuleController:(id)arg0 didSelectToOpenTriggerBuilder:(id)arg1 ;
-(void)recommendedTriggerModuleControllerDidSelectShowMore:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)triggerEditor:(id)arg0 didCommitTriggerBuilder:(id)arg1 withError:(id)arg2 ;
-(void)triggerEditor:(id)arg0 didFinishWithTriggerBuilder:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif