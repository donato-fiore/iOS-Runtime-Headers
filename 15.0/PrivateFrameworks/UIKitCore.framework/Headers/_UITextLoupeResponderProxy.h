// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTLOUPERESPONDERPROXY_H
#define _UITEXTLOUPERESPONDERPROXY_H

@protocol _UITextLoupeResponderProxyDelegate;


#import "UIResponder.h"

@interface _UITextLoupeResponderProxy : UIResponder

@property (weak, nonatomic) NSObject<_UITextLoupeResponderProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) UIResponder *responder; // ivar: _responder


+(id)_proxyWithResponder:(id)arg0 ;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)nextResponder;


@end


#endif