// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSTYLEPROVIDERUIALERT_H
#define AXSTYLEPROVIDERUIALERT_H

@protocol AXUIAlertStyleProvider;


#import "AXUIAlert.h"

@interface AXStyleProviderUIAlert : AXUIAlert {
    CGFloat _dismissalGestureYOffset;
    CGPoint _backgroundViewDismissalOrigin;
}


@property (nonatomic) NSUInteger alertType; // ivar: _alertType
@property (retain, nonatomic) NSObject<AXUIAlertStyleProvider> *styleProvider; // ivar: _styleProvider


-(id)initWithType:(NSUInteger)arg0 text:(id)arg1 subtitleText:(id)arg2 iconImage:(id)arg3 styleProvider:(id)arg4 userInfo:(id)arg5 ;
-(void)_appendParagraphWithText:(id)arg0 withTextColor:(id)arg1 font:(id)arg2 textAlignment:(NSInteger)arg3 lineSpacing:(CGFloat)arg4 paragraphSpacingBefore:(CGFloat)arg5 toAttributedString:(id)arg6 ;
-(void)_cancelDismissalWithPanGesture:(id)arg0 ;
-(void)_endDismissalWithPanGesture:(id)arg0 ;
-(void)_handlePanGestureRecognizer:(id)arg0 ;
-(void)_handleTapGestureRecognizer:(id)arg0 ;
-(void)_updateDismissalWithPanGesture:(id)arg0 ;
-(void)_updateViewForDismissalPercentage:(CGFloat)arg0 ;
-(void)addToContainerView:(id)arg0 ;


@end


#endif