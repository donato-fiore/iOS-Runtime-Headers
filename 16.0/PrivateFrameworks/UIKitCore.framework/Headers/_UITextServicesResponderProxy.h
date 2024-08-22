// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSERVICESRESPONDERPROXY_H
#define _UITEXTSERVICESRESPONDERPROXY_H

@protocol _UITextServicesResponderProxyDelegate;


#import "UIResponder.h"

@interface _UITextServicesResponderProxy : UIResponder

@property (weak, nonatomic) NSObject<_UITextServicesResponderProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) UIResponder *responder; // ivar: _responder


+(id)_proxyWithResponder:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)nextResponder;
-(void)_addShortcut:(id)arg0 ;
-(void)_define:(id)arg0 ;
-(void)_lookup:(id)arg0 ;
-(void)_share:(id)arg0 ;
-(void)_translate:(id)arg0 ;


@end


#endif