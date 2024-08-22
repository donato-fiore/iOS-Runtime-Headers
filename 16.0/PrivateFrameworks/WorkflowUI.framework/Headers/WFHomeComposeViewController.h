// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHOMECOMPOSEVIEWCONTROLLER_H
#define WFHOMECOMPOSEVIEWCONTROLLER_H

@protocol WFHomeComposeViewControllerDelegate;


#import "WFComposeViewController.h"

@interface WFHomeComposeViewController : WFComposeViewController

@property (weak, nonatomic) NSObject<WFHomeComposeViewControllerDelegate> *delegate;


+(void)preloadActionRegistryIfNeeded;
+(void)preloadHomeManager;
-(NSUInteger)navigationUpdateBehavior;
-(id)doneBarButtonItem;
-(id)initWithHomeWorkflow:(id)arg0 actionSetBuilder:(id)arg1 ;
-(id)initWithHomeWorkflow:(id)arg0 actionSetBuilder:(id)arg1 home:(id)arg2 ;
-(id)initWithWorkflow:(id)arg0 home:(id)arg1 ;
-(void)didTapDone;
-(void)dismissForTutorial:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif