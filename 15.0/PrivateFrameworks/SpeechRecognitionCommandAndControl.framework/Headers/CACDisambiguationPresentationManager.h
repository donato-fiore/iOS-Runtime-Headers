// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACDISAMBIGUATIONPRESENTATIONMANAGER_H
#define CACDISAMBIGUATIONPRESENTATIONMANAGER_H

@protocol CACContactDisambiguationPresentationViewControllerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACDisambiguationPresentationManager : CACSimpleContentViewManager <CACContactDisambiguationPresentationViewControllerDelegate>





-(BOOL)isOverlay;
-(void)dialDiambiguationPresentationViewController:(id)arg0 hideWithCompletion:(id)arg1 ;
-(void)showWithDisambiguationItems:(id)arg0 ;
-(void)showWithDisambiguationItems:(id)arg0 alertTitle:(id)arg1 ;
-(void)showWithDisambiguationItems:(id)arg0 alertTitle:(id)arg1 alertMessage:(id)arg2 ;


@end


#endif