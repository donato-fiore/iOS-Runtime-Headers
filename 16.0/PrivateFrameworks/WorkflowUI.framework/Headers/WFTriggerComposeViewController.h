// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFTRIGGERCOMPOSEVIEWCONTROLLER_H
#define WFTRIGGERCOMPOSEVIEWCONTROLLER_H

@protocol WFTriggerComposeViewControllerDelegate;


#import "WFComposeViewController.h"

@interface WFTriggerComposeViewController : WFComposeViewController

@property (weak, nonatomic) NSObject<WFTriggerComposeViewControllerDelegate> *delegate; // ivar: delegate
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode


+(BOOL)canShowInputAction;
-(BOOL)isModalInPresentation;
-(BOOL)showsSettingsToolbarButton;
-(NSUInteger)navigationUpdateBehavior;
-(id)doneBarButtonItem;
-(id)emptyStateString;
-(id)initWithWorkflow:(id)arg0 mode:(NSUInteger)arg1 database:(id)arg2 ;
-(void)dealloc;
-(void)didTapNext:(id)arg0 ;
-(void)dismissForTutorial:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif