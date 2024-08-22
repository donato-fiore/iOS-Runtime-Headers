// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERUSERINFOVIEWCONTROLLER_H
#define PKPAYLATERUSERINFOVIEWCONTROLLER_H

@class NSString;
@protocol PKPayLaterUserInfoSectionControllerDelegate, PKSetupFlowControllerProtocol;


#import "PKPayLaterViewController.h"
#import "PKPayLaterUserInfoSectionController.h"
#import "PKApplyController.h"

@interface PKPayLaterUserInfoViewController : PKPayLaterViewController <PKPayLaterUserInfoSectionControllerDelegate, PKSetupFlowControllerProtocol>

 {
    PKPayLaterUserInfoSectionController *_sectionController;
    PKApplyController *_applyController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPayLaterAccount:(id)arg0 ;
-(id)pageTag;
-(void)didUpdatePayLaterAccount:(id)arg0 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)updateUserInfoForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif