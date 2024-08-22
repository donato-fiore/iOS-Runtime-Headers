// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXONEUPPRESENTATIONIMPLEMENTATIONDELEGATE_H
#define PUPXONEUPPRESENTATIONIMPLEMENTATIONDELEGATE_H

@class NSString;
@protocol PXOneUpPresentationImplementationDelegate;

#import <Foundation/Foundation.h>


@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)oneUpPresentation:(id)arg0 canStartAnimated:(BOOL)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 handlePresentingPinchGestureRecognizer:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 startWithConfigurationHandler:(id)arg1 ;
-(BOOL)oneUpPresentationCanStop:(id)arg0 ;
-(id)oneUpPresentationLastViewedAssetReference:(id)arg0 ;
-(id)previewViewControllerForOneUpPresentation:(id)arg0 allowingActions:(BOOL)arg1 ;
-(void)oneUpPresentation:(id)arg0 commitPreviewViewController:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg0 presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)oneUpPresentation:(id)arg0 presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)oneUpPresentation:(id)arg0 presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(void)oneUpPresentation:(id)arg0 presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(void)oneUpPresentation:(id)arg0 stopAnimated:(BOOL)arg1 ;
-(void)oneUpPresentationInvalidatePresentingGeometry:(id)arg0 ;


@end


#endif