// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXONEUPPRESENTATIONIMPLEMENTATION_H
#define PUPXONEUPPRESENTATIONIMPLEMENTATION_H

@class PXOneUpPresentation, NSString, PXAssetReference;
@protocol PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PXRegionOfInterestProvider;

#import <Foundation/Foundation.h>

#import "PUOneUpPresentationHelper.h"

@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate, PXRegionOfInterestProvider>



@property (readonly, nonatomic) PUOneUpPresentationHelper *_helper; // ivar: __helper
@property (readonly, weak, nonatomic) PXOneUpPresentation *_oneUpPresentation; // ivar: __oneUpPresentation
@property (readonly, nonatomic) BOOL canStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
@property (readonly) Class superclass;


+(id)implementationForOneUpPresentation:(id)arg0 ;
-(BOOL)canStartAnimated:(BOOL)arg0 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg0 ;
-(BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldAutoPlay:(id)arg0 ;
-(BOOL)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg0 ;
-(BOOL)oneUpPresentationHelperWantsShowInLibraryButton:(id)arg0 ;
-(BOOL)startWithConfigurationHandler:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)oneUpPresentationHelperAdditionalOptions:(id)arg0 ;
-(id)_initWithOneUpPresentation:(id)arg0 ;
-(id)init;
-(id)oneUpPresentationHelper:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentationHelper:(id)arg0 regionOfInterestForAssetReference:(id)arg1 cropInsets:(struct UIEdgeInsets *)arg2 ;
-(id)oneUpPresentationHelperAssetUUIDsAllowedToHighlightText:(id)arg0 ;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationHelperTextsToHighlight:(id)arg0 ;
-(id)oneUpPresentationHelperViewController:(id)arg0 ;
-(id)oneUpPresentationHelperViewHostingTilingView:(id)arg0 ;
-(id)previewViewControllerAllowingActions:(BOOL)arg0 ;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)invalidatePresentingGeometry;
-(void)oneUpPresentationHelper:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg0 shouldHideAssetReferences:(id)arg1 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg0 ;
-(void)stopAnimated:(BOOL)arg0 ;


@end


#endif