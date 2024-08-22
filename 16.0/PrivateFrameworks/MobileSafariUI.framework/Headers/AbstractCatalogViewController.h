// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABSTRACTCATALOGVIEWCONTROLLER_H
#define ABSTRACTCATALOGVIEWCONTROLLER_H

@class UIViewController, SFStartPageViewController;


#import "CompletionListTableViewController.h"
#import "UniversalSearchFirstTimeExperienceViewController.h"

@interface AbstractCatalogViewController : UIViewController

@property (readonly, nonatomic) CompletionListTableViewController *completionsViewController;
@property (readonly, nonatomic) CompletionListTableViewController *completionsViewControllerIfLoaded;
@property (readonly, nonatomic) UIViewController *foregroundChildViewController;
@property (readonly, nonatomic) CGFloat requiredContentWidth;
@property (readonly, nonatomic) SFStartPageViewController *startPageViewController;
@property (readonly, nonatomic) UniversalSearchFirstTimeExperienceViewController *universalSearchFirstTimeExperienceViewController;


-(BOOL)_takeOwnershipOfViewController:(id)arg0 ;
-(BOOL)isResponsibleForLayoutOfViewController:(id)arg0 ;
-(void)_relinquishOwnershipOfViewControllerFromCurrentParent:(id)arg0 ;
-(void)didGainOwnershipOfCompletionsViewController;
-(void)didGainOwnershipOfStartPageViewController;
-(void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
-(void)relinquishOwnershipOfStartPageViewControllerFromCurrentParent;
-(void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
-(void)takeOwnershipOfCompletionsViewController;
-(void)takeOwnershipOfStartPageViewController;
-(void)takeOwnershipOfUniversalSearchFirstTimeExperienceViewController;
-(void)updatePreferredContentSize;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif