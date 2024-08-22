// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKCARDSECTIONVIEWCONFIGURATION_H
#define CRKCARDSECTIONVIEWCONFIGURATION_H

@class UIView<CRKCardSectionView>, UIViewController<CRKCardSectionViewControlling>, NSString;
@protocol CRCardSection, CRKFeedbackDelegateProxying;

#import <Foundation/Foundation.h>

#import "CRKCardSectionViewController.h"
#import "_CRKDebugOverlayView.h"

@interface CRKCardSectionViewConfiguration : NSObject

@property (retain, nonatomic, getter=_cardKitCardSectionViewController, setter=_setCardKitCardSectionViewController:) CRKCardSectionViewController *cardKitCardSectionViewController; // ivar: _cardKitCardSectionViewController
@property (retain, nonatomic) NSObject<CRCardSection> *cardSection; // ivar: _cardSection
@property (retain, nonatomic) UIView<CRKCardSectionView> *cardSectionView; // ivar: _cardSectionView
@property (retain, nonatomic) UIViewController<CRKCardSectionViewControlling> *cardSectionViewController; // ivar: _cardSectionViewController
@property (nonatomic, getter=_debugModeEnabled, setter=_setDebugModeEnabled:) BOOL debugModeEnabled; // ivar: _debugModeEnabled
@property (retain, nonatomic, getter=_debugOverlayView, setter=_setDebugOverlayView:) _CRKDebugOverlayView *debugOverlayView; // ivar: _debugOverlayView
@property (retain, nonatomic) NSObject<CRKFeedbackDelegateProxying> *feedbackDelegateProxy; // ivar: _feedbackDelegateProxy
@property (copy, nonatomic, getter=_providerIdentifier, setter=_setProviderIdentifier:) NSString *providerIdentifier; // ivar: _providerIdentifier


-(void)_updateDebugOverlayViewText:(id)arg0 ;


@end


#endif