// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACELEMENTACTIONSPRESENTATIONMANAGER_H
#define CACELEMENTACTIONSPRESENTATIONMANAGER_H

@protocol CACElementActionsPresentationViewControllerDelegate;


#import "CACSimpleContentViewManager.h"

@interface CACElementActionsPresentationManager : CACSimpleContentViewManager <CACElementActionsPresentationViewControllerDelegate>





+(BOOL)canShowElementActionsForElement:(id)arg0 ;
-(BOOL)isOverlay;
-(void)elementActionsPresentationViewController:(id)arg0 hideWithCompletion:(id)arg1 ;
-(void)showElementActionsForElement:(id)arg0 usingPortraitUpRect:(struct CGRect )arg1 ;


@end


#endif