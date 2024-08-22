// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMEHUBMIGRATIONFAILEDVIEWCONTROLLER_H
#define HUHOMEHUBMIGRATIONFAILEDVIEWCONTROLLER_H

@class OBBoldTrayButton, NSString;
@protocol HUConfigurationViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUHomeHubMigrationFailedViewController : HUImageOBWelcomeController <HUConfigurationViewController>



@property (retain, nonatomic) OBBoldTrayButton *commitButton; // ivar: _commitButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)init;
-(void)_doneAction:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif