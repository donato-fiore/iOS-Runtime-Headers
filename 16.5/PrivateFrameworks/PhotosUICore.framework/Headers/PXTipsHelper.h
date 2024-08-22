// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTIPSHELPER_H
#define PXTIPSHELPER_H


#import <Foundation/Foundation.h>


@interface PXTipsHelper : NSObject



+(BOOL)isTipPresentable:(id)arg0 ;
+(id)curatedLibrarySwitchTipID;
+(void)invalidateClientContextForTip:(id)arg0 ;
+(void)presentPopoverTip:(id)arg0 with:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 passthroughViews:(id)arg4 permittedArrowDirections:(NSUInteger)arg5 delegate:(id)arg6 ;
+(void)setTip:(id)arg0 dismissCompletion:(id)arg1 ;
+(void)setTip:(id)arg0 isPresentable:(BOOL)arg1 ;
+(void)setTipActionPerformed:(id)arg0 ;
+(void)setup;
+(void)updatePopoverTip:(id)arg0 sourceRect:(struct CGRect )arg1 ;


@end


#endif