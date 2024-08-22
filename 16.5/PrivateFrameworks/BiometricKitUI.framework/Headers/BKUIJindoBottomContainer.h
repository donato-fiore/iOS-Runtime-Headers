// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIJINDOBOTTOMCONTAINER_H
#define BKUIJINDOBOTTOMCONTAINER_H

@class NSString;
@protocol BKUIButtonTrayActionDelegate;


#import "BKUIPearlEnrollViewBottomContainer.h"

@interface BKUIJindoBottomContainer : BKUIPearlEnrollViewBottomContainer <BKUIButtonTrayActionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldShowBottomLinkButton;
-(BOOL)showStartOverForState:(int)arg0 ;
-(id)escapeHatchButtonForState:(int)arg0 ;
-(void)_updateButtonVisibilityForScrollView:(id)arg0 state:(int)arg1 subState:(int)arg2 ;
-(void)buttonSelectedWithButtonTrayPosition:(NSInteger)arg0 ;
-(void)setupInitialUI;


@end


#endif