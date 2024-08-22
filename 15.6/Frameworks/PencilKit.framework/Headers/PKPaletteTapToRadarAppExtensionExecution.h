// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTETAPTORADARAPPEXTENSIONEXECUTION_H
#define PKPALETTETAPTORADARAPPEXTENSIONEXECUTION_H

@class UIViewController, NSLayoutConstraint, NSString;
@protocol PKTextInputDebugRadarViewControllerDelegate;


#import "PKPaletteTapToRadarCommandExecution.h"

@interface PKPaletteTapToRadarAppExtensionExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate>

 {
    UIViewController *_contentViewController;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_dismiss;
-(void)_updateUI;
-(void)debugRadarViewControllerDidDismiss:(id)arg0 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)run;


@end


#endif