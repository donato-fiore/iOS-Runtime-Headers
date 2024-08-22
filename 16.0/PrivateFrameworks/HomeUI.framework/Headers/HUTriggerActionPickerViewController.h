// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERACTIONPICKERVIEWCONTROLLER_H
#define HUTRIGGERACTIONPICKERVIEWCONTROLLER_H

@protocol WFHomeWorkflowEditorViewControllerDelegate, HUTriggerEditorDelegate;


#import "HUItemCollectionViewController.h"
#import "HUTriggerActionFlow.h"

@interface HUTriggerActionPickerViewController : HUItemCollectionViewController <WFHomeWorkflowEditorViewControllerDelegate>

 {
    ? actionSetModule;
    ? accessoryModule;
    ? selectionController;
}


@property (nonatomic, readonly) NSObject<HUTriggerEditorDelegate> *delegate; // ivar: delegate
@property (nonatomic, readonly) HUTriggerActionFlow *flow; // ivar: flow
@property (nonatomic, readonly) id *triggerBuilder; // ivar: triggerBuilder


-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 delegate:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)listContentConfigurationForSupplementaryElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)cancelWithSender:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)homeWorkflowEditorViewController:(id)arg0 didFinishWithHomeWorkflow:(id)arg1 includesSecureAccessory:(BOOL)arg2 ;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)nextWithSender:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif