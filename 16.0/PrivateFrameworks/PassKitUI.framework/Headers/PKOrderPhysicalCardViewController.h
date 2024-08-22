// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKORDERPHYSICALCARDVIEWCONTROLLER_H
#define PKORDERPHYSICALCARDVIEWCONTROLLER_H

@class NSString, PKPhysicalCardArtworkOption;
@protocol PKExplanationViewDelegate, PKViewControllerPreflightable, PKPaymentSetupViewControllerDelegate;


#import "PKExplanationViewController.h"
#import "PKOrderPhysicalCardController.h"
#import "PKOrderPhysicalCardHeroView.h"

@interface PKOrderPhysicalCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable>

 {
    NSInteger _context;
    PKOrderPhysicalCardController *_controller;
    NSUInteger _featureIdentifier;
    NSString *_nameOnCard;
    PKPhysicalCardArtworkOption *_artworkOption;
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;
    BOOL _unavailableToOrder;
}


@property (copy, nonatomic) NSString *bodyOverride; // ivar: _bodyOverride
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *primaryButtonTitleOverride; // ivar: _primaryButtonTitleOverride
@property (copy, nonatomic) NSString *secondaryButtonTitleOverride; // ivar: _secondaryButtonTitleOverride
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleOverride; // ivar: _titleOverride


-(id)initWithController:(id)arg0 ;
-(void)_handleNextStep;
-(void)_terminateSetupFlow;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif