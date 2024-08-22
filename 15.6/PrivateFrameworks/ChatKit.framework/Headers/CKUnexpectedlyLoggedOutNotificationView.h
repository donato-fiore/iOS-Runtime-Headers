// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKUNEXPECTEDLYLOGGEDOUTNOTIFICATIONVIEW_H
#define CKUNEXPECTEDLYLOGGEDOUTNOTIFICATIONVIEW_H

@class UIView, NSString;
@protocol CKTwoButtonInlineNotificationViewDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate;


#import "CKTwoButtonInlineNotificationView.h"

@interface CKUnexpectedlyLoggedOutNotificationView : UIView <CKTwoButtonInlineNotificationViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKUnexpectedlyLoggedOutNotificationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CKTwoButtonInlineNotificationView *inlineNotificationView; // ivar: _inlineNotificationView
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)inlineNotificationView:(id)arg0 didChangeRequestedHeight:(CGFloat)arg1 ;
-(void)inlineNotificationViewDidReceiveLeftButtonTap:(id)arg0 ;
-(void)inlineNotificationViewDidReceiveRightButtonTap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif