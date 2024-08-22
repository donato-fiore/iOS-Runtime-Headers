// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEADDPASSESVIEWCONTROLLER_H
#define PKSERVICEADDPASSESVIEWCONTROLLER_H

@class NSString;
@protocol PKAddPassesCardStackViewControllerDelegate, PKIssuerBindingViewControllerDelegate, PKServiceAddPassesViewControllerProtocol, PKServiceAddPassesViewControllerResultsDelegate;


#import "PKNavigationController.h"
#import "PKAddPassesCardStackViewController.h"
#import "PKIssuerBindingViewController.h"

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKIssuerBindingViewControllerDelegate, PKServiceAddPassesViewControllerProtocol>

 {
    CGSize _screenSize;
    CGFloat _screenScale;
    BOOL _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
    PKIssuerBindingViewController *_issuerBindingViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKServiceAddPassesViewControllerResultsDelegate> *resultsDelegate; // ivar: _resultsDelegate
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)_dismissDelayed;
-(void)_ingestionDidFinishWithResult:(NSUInteger)arg0 ;
-(void)_setupCardStackViewControllerWithPassDataArray:(id)arg0 orPassesContainer:(id)arg1 fromPresentationSource:(NSUInteger)arg2 shouldPushController:(BOOL)arg3 ;
-(void)_setupIssuerBindingViewControllerWithData:(id)arg0 signature:(id)arg1 ;
-(void)addPassesCardStackViewController:(id)arg0 didCancelAddingPasses:(id)arg1 ;
-(void)addPassesCardStackViewController:(id)arg0 didFinishAddingPasses:(id)arg1 ;
-(void)evaluateBrightness;
-(void)ingestPasses:(id)arg0 orPassesContainer:(id)arg1 orIssuerData:(id)arg2 withSignature:(id)arg3 fromPresentationSource:(NSUInteger)arg4 ;
-(void)issuerBindingViewController:(id)arg0 didFinishWithPassesData:(id)arg1 ;
-(void)issuerBindingViewControllerDidCancel:(id)arg0 ;
-(void)resetBrightness;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif