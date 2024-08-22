// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSTEPPER_H
#define MRUSTEPPER_H

@class UIView, NSString, UIImage, UIImageSymbolConfiguration;
@protocol MRUVisualStylingProviderObserver, MRUStepperDelegate;


#import "MRUTransportButton.h"
#import "MRUVisualStylingProvider.h"

@interface MRUStepper : UIView <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *decrementBackground; // ivar: _decrementBackground
@property (retain, nonatomic) MRUTransportButton *decrementButton; // ivar: _decrementButton
@property (retain, nonatomic) UIImage *decrementImage; // ivar: _decrementImage
@property (weak, nonatomic) NSObject<MRUStepperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *incrementBackground; // ivar: _incrementBackground
@property (retain, nonatomic) MRUTransportButton *incrementButton; // ivar: _incrementButton
@property (retain, nonatomic) UIImage *incrementImage; // ivar: _incrementImage
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: _preferredSymbolConfiguration
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)decreaseButtonHoldBegan:(id)arg0 ;
-(void)decreaseButtonHoldReleased:(id)arg0 ;
-(void)decreaseTouchUpInside:(id)arg0 ;
-(void)increaseButtonHoldBegan:(id)arg0 ;
-(void)increaseButtonHoldReleased:(id)arg0 ;
-(void)increaseTouchUpInside:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif