// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUHEADERBUTTONSVIEW_H
#define MUHEADERBUTTONSVIEW_H

@class UIView, NSArray, MKETAProvider, _MKPlaceActionButtonController, NSString;
@protocol MKETAProviderObserver, MUPlaceHeaderButtonsViewControllerDelegate;


#import "MUPlaceHeaderButton.h"
#import "MUHeaderButtonsViewConfiguration.h"

@interface MUHeaderButtonsView : UIView <MKETAProviderObserver>

 {
    MUPlaceHeaderButton *_primaryButton;
    MUPlaceHeaderButton *_alternatePrimaryButton;
    MUPlaceHeaderButton *_secondaryButton;
    MUPlaceHeaderButton *_moreButton;
    NSArray *_constraints;
    BOOL _isStackingButtons;
    MUHeaderButtonsViewConfiguration *_configuration;
    MKETAProvider *_etaProvider;
}


@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController; // ivar: _alternatePrimaryButtonController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MUPlaceHeaderButtonsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger primaryButtonType; // ivar: _primaryButtonType
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController; // ivar: _secondaryButtonController
@property (readonly) Class superclass;


-(BOOL)shouldStackForButtons;
-(id)initWithConfiguration:(id)arg0 ;
-(void)ETAProviderUpdated:(id)arg0 ;
-(void)_activateNewConstraints:(id)arg0 ;
-(void)_createLayout;
-(void)_didTapAlternatePrimaryAction;
-(void)_didTapMoreButton;
-(void)_didTapPrimaryAction;
-(void)_didTapSecondaryAction;
-(void)_loadPrimaryButtonWithPrimaryType:(NSUInteger)arg0 ;
-(void)_loadSecondaryButtonWithSecondaryActionController:(id)arg0 ;
-(void)_setupSubviews;
-(void)_updateConstraintsIfNeeded;
-(void)_updateContent;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif