// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIUSERNOTIFICATIONRESTRICTEDALERTVIEWPROXY_H
#define _UIUSERNOTIFICATIONRESTRICTEDALERTVIEWPROXY_H

@class UITargetedProxy, NSString;
@protocol UIAlertViewDelegate;



@interface _UIUserNotificationRestrictedAlertViewProxy : UITargetedProxy <UIAlertViewDelegate>

 {
    id *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)restrictedProxyForAlertView:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif