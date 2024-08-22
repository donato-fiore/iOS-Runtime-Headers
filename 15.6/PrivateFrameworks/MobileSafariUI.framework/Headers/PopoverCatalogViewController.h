// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POPOVERCATALOGVIEWCONTROLLER_H
#define POPOVERCATALOGVIEWCONTROLLER_H



#import "AbstractCatalogViewController.h"
#import "CatalogViewController.h"

@interface PopoverCatalogViewController : AbstractCatalogViewController {
    CGFloat _startPagePreferredHeight;
}


@property (weak, nonatomic) CatalogViewController *primaryCatalogViewController; // ivar: _primaryCatalogViewController


-(CGFloat)_preferredHeightForStartPage;
-(CGFloat)requiredContentWidth;
-(id)completionsViewController;
-(id)completionsViewControllerIfLoaded;
-(id)startPageViewController;
-(id)universalSearchFirstTimeExperienceViewController;
-(void)didGainOwnershipOfCompletionsViewController;
-(void)didGainOwnershipOfStartPageViewController;
-(void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
-(void)resetStartPagePreferredHeight;
-(void)updateStartPagePreferredContentSize;
-(void)viewWillLayoutSubviews;


@end


#endif