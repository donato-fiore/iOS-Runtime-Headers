// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUVOLUMESTEPPERVIEW_H
#define MRUVOLUMESTEPPERVIEW_H

@class UIView, NSString, MPVolumeController;
@protocol MRUVisualStylingProviderObserver;


#import "MRUButton.h"
#import "MRUVisualStylingProvider.h"

@interface MRUVolumeStepperView : UIView <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *decreaseBackground; // ivar: _decreaseBackground
@property (retain, nonatomic) MRUButton *decreaseButton; // ivar: _decreaseButton
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *increaseBackground; // ivar: _increaseBackground
@property (retain, nonatomic) MRUButton *increaseButton; // ivar: _increaseButton
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) MPVolumeController *volumeController; // ivar: _volumeController


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