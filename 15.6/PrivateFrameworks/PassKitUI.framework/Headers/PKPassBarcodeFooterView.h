// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSBARCODEFOOTERVIEW_H
#define PKPASSBARCODEFOOTERVIEW_H

@class LAContext, NSMutableArray, NSString;
@protocol PKForegroundActiveArbiterObserver;


#import "PKPassFooterContentView.h"

@interface PKPassBarcodeFooterView : PKPassFooterContentView <PKForegroundActiveArbiterObserver>

 {
    BOOL _visible;
    BOOL _needsAuthentication;
    BOOL _authenticated;
    BOOL _foregroundActive;
    LAContext *_context;
    NSMutableArray *_contextCompletions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPass:(id)arg0 ;
-(void)_authenticateWithCompletion:(id)arg0 ;
-(void)_didInvalidate;
-(void)didBecomeHiddenAnimated:(BOOL)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id)arg0 ;
-(void)willBecomeVisibleAnimated:(BOOL)arg0 ;


@end


#endif