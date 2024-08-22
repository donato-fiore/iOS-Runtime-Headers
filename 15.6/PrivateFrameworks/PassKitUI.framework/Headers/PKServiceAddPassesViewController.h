// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSERVICEADDPASSESVIEWCONTROLLER_H
#define PKSERVICEADDPASSESVIEWCONTROLLER_H

@class NSString;
@protocol PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol;


#import "PKNavigationController.h"
#import "PKAddPassesCardStackViewController.h"

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol>

 {
    CGSize _screenSize;
    CGFloat _screenScale;
    BOOL _placeholderViewControllerDidCancel;
    PKAddPassesCardStackViewController *_cardStackViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)addPassesCardStackViewController:(id)arg0 didCancelAddingPasses:(id)arg1 ;
-(void)addPassesCardStackViewController:(id)arg0 didFinishAddingPasses:(id)arg1 ;
-(void)evaluateBrightness;
-(void)ingestPasses:(id)arg0 orPassesContainer:(id)arg1 fromPresentationSource:(NSUInteger)arg2 ;
-(void)resetBrightness;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif