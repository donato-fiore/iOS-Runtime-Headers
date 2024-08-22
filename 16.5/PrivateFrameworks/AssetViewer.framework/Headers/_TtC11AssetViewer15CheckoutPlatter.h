// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ASSETVIEWER15CHECKOUTPLATTER_H
#define _TTC11ASSETVIEWER15CHECKOUTPLATTER_H

@class SwiftObject;



@interface _TtC11AssetViewer15CheckoutPlatter : SwiftObject {
    ? style;
    ? delegate;
    ? $__lazy_storage_$_checkoutContainer;
    ? traitManager;
    ? heightBackgroundViewConstraint;
    ? widthBackgroundViewConstraint;
    ? leftBackgroundViewConstraint;
    ? rightBackgroundViewConstraint;
    ? bottomBackgroundViewConstraint;
    ? topCheckoutContainerConstraint;
    ? bottomCheckoutContainerConstraint;
    ? centerYCheckoutContainerConstraint;
    ? $__lazy_storage_$_backgroundView;
    ? $__lazy_storage_$_customButtonFull;
    ? hasCustomContentFinishedLoaded;
    ? hasPerformedSlideUpIntroAnimation;
    ? analytics;
    ? allowsContentVisibility;
    ? customHTMLLoadedBlock;
}




-(void)applePayButtonPressed;
-(void)contentSizeCategoryDidChange;


@end


#endif