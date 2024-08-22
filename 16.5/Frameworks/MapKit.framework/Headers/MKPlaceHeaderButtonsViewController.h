// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPLACEHEADERBUTTONSVIEWCONTROLLER_H
#define MKPLACEHEADERBUTTONSVIEWCONTROLLER_H

@class NSArray, UIButton<_MKPlaceActionControlledButton>, NSMutableAttributedString, UIView, NSString;
@protocol MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver, MKPlaceHeaderButtonsViewControllerDelegate, GEOTransitLineItem, _MKPlaceItem;


#import "MKPlaceSectionViewController.h"
#import "MKPlaceSectionRowView.h"
#import "_MKPlaceActionButtonController.h"

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver>

 {
    MKPlaceSectionRowView *_buttonsContainerView;
    NSArray *_constraints;
    UIButton<_MKPlaceActionControlledButton> *_primaryButton;
    UIButton<_MKPlaceActionControlledButton> *_alternatePrimaryButton;
    UIButton<_MKPlaceActionControlledButton> *_secondaryButton;
    NSMutableAttributedString *_currentETAString;
}


@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController; // ivar: _alternatePrimaryButtonController
@property (readonly, nonatomic) NSArray *buttons; // ivar: _buttons
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKPlaceHeaderButtonsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<GEOTransitLineItem> *lineItem; // ivar: _lineItem
@property (retain, nonatomic) NSObject<_MKPlaceItem> *placeItem; // ivar: _placeItem
@property (nonatomic) NSUInteger primaryButtonType; // ivar: _primaryButtonType
@property (nonatomic) BOOL resizableViewsDisabled; // ivar: _resizableViewsDisabled
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController; // ivar: _secondaryButtonController
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldStackForButtons:(id)arg0 ;
-(id)attributedStringWith:(id)arg0 ;
-(id)directionAttributedStringWithETAString;
-(id)etaStringFor:(NSUInteger)arg0 travelTime:(CGFloat)arg1 ;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(id)init;
-(id)primaryAttributedString;
-(id)rerouteAttributedString;
-(id)updateButton:(id)arg0 withController:(id)arg1 ;
-(void)ETAProviderUpdated:(id)arg0 ;
-(void)_commonInit;
-(void)_contentSizeDidChange;
-(void)primaryButtonSelected:(id)arg0 ;
-(void)setConstraints;
-(void)setupPrimaryButton;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif