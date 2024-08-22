// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEDUCATIONVIEWCONTROLLER_H
#define PKEDUCATIONVIEWCONTROLLER_H

@class PKPaymentHeroImageController, UIImageView, UIView, PKPaymentPass, NSString;
@protocol PKExplanationViewDelegate, PKFieldDetectSuppressor;


#import "PKExplanationViewController.h"
#import "PKEducationPhone.h"

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor>

 {
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_heroPadImageView;
    UIView *_heroPadBackground;
    PKPaymentPass *_paymentPass;
    NSUInteger _educationContext;
    PKEducationPhone *_educationBodyView;
    BOOL _isFaceIDDevice;
    BOOL _invalidated;
    BOOL _wasNavigationBarHidden;
}


@property (copy, nonatomic) NSString *bodyAddition; // ivar: _bodyAddition
@property (copy, nonatomic) id *continueHandler; // ivar: _continueHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL offerAddToWatch; // ivar: _offerAddToWatch
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressFieldDetect;
@property (copy, nonatomic) NSString *titleOverride; // ivar: _titleOverride


+(BOOL)shouldPresentForPass:(id)arg0 inEducationContext:(NSUInteger)arg1 ;
+(id)assetBackgroundColor;
+(id)assetBackgroundColorPad;
-(BOOL)_canShowWhileLocked;
-(id)_heroPadImage;
-(id)init;
-(id)initWithPaymentPass:(id)arg0 setupContext:(NSInteger)arg1 educationContext:(NSUInteger)arg2 ;
-(void)_performAddToWatchFlow;
-(void)_showAddToWatchOfferForPass:(id)arg0 ;
-(void)dealloc;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)invalidate;
-(void)loadView;
-(void)performContinue;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif