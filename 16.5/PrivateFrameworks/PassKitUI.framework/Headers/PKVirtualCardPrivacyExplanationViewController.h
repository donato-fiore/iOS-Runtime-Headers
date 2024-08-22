// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKVIRTUALCARDPRIVACYEXPLANATIONVIEWCONTROLLER_H
#define PKVIRTUALCARDPRIVACYEXPLANATIONVIEWCONTROLLER_H

@class NSString;
@protocol PKExplanationViewDelegate;


#import "PKExplanationViewController.h"

@interface PKVirtualCardPrivacyExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate>

 {
    NSUInteger _referralSource;
    BOOL _didBeginWalletProvisioningSubject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *resultCallback; // ivar: _resultCallback
@property (readonly) Class superclass;


-(id)initWithContext:(NSInteger)arg0 referralSource:(NSUInteger)arg1 resultCallback:(id)arg2 ;
-(void)_beginReportingIfNecessary;
-(void)_endReportingIfNecessary;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif