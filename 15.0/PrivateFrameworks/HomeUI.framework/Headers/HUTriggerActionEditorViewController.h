// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERACTIONEDITORVIEWCONTROLLER_H
#define HUTRIGGERACTIONEDITORVIEWCONTROLLER_H

@class NSString, HFTriggerBuilder;
@protocol WFHomeComposeViewControllerDelegate, HUTriggerEditorDelegate;


#import "HUInstructionsTableViewController.h"
#import "HUTriggerActionEditorContentViewController.h"
#import "HUForwardingTriggerActionBuilderDelegate.h"

@interface HUTriggerActionEditorViewController : HUInstructionsTableViewController <WFHomeComposeViewControllerDelegate>



@property (readonly, nonatomic) HUTriggerActionEditorContentViewController *actionEditorContentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUForwardingTriggerActionBuilderDelegate *forwardingTriggerActionBuilderDelegate; // ivar: _forwardingTriggerActionBuilderDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HFTriggerBuilder *triggerBuilder;


+(BOOL)adoptsDefaultGridLayoutMargins;
+(id)createTriggerActionEditorViewControllerForHome:(id)arg0 withTriggerActionSetBuilder:(id)arg1 andTriggerActionBuilderEditorDelegate:(id)arg2 ;
-(BOOL)shouldHideSeparatorsForCell:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithInstructionsItem:(id)arg0 contentViewController:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 flow:(id)arg1 delegate:(id)arg2 ;
-(id)initWithTriggerBuilder:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)_informUserShortcutsAreNotSupportedInThisHome;
-(void)_showShortcutsEditor;
-(void)_showShortcutsEditorIfPossible;
-(void)homeComposeViewController:(id)arg0 didFinishWithHomeWorkflow:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif