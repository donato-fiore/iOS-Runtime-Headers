// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTETAPTORADARREGULAREXECUTION_H
#define PKPALETTETAPTORADARREGULAREXECUTION_H

@class UIWindow, NSString;
@protocol PKTextInputDebugRadarViewControllerDelegate, UIAdaptivePresentationControllerDelegate;


#import "PKPaletteTapToRadarCommandExecution.h"

@interface PKPaletteTapToRadarRegularExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate, UIAdaptivePresentationControllerDelegate>

 {
    UIWindow *_window;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(void)_dismiss;
-(void)debugRadarViewControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)run;


@end


#endif