// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UINAVIGATIONCONTROLLERADAPTIVEPRESENTATIONCOLLECTIONVIEW_H
#define UINAVIGATIONCONTROLLERADAPTIVEPRESENTATIONCOLLECTIONVIEW_H

@class UINavigationController, NSString;
@protocol CKAdaptivePresentedControllerProtocol;



@interface UINavigationControllerAdaptivePresentationCollectionView : UINavigationController <CKAdaptivePresentedControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL preserveModalPresentationStyle; // ivar: _preserveModalPresentationStyle
@property (nonatomic) BOOL shouldHidePresentingWindow;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsWindowedPresentation; // ivar: _wantsWindowedPresentation




@end


#endif