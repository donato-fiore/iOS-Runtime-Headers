// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERMOREINFORMATIONVIEWCONTROLLER_H
#define PKPAYLATERMOREINFORMATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKPayLaterSectionControllerDelegate;


#import "PKPayLaterSetupViewController.h"
#import "PKPayLaterMoreInformationSectionController.h"

@interface PKPayLaterMoreInformationViewController : PKPayLaterSetupViewController <PKPayLaterSectionControllerDelegate>

 {
    PKPayLaterMoreInformationSectionController *_sectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSetupFlowController:(id)arg0 ;
-(void)nextButtonTapped;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif