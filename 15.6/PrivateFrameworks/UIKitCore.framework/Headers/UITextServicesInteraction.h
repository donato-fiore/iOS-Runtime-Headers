// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTSERVICESINTERACTION_H
#define UITEXTSERVICESINTERACTION_H

@protocol _UITextServicesResponderProxyDelegate;


#import "UITextInteraction.h"
#import "_UITextServiceSession.h"
#import "UIResponder.h"
#import "_UITextServicesResponderProxy.h"

@interface UITextServicesInteraction : UITextInteraction <_UITextServicesResponderProxyDelegate>

 {
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
}


@property (readonly, nonatomic) UIResponder *responder;
@property (retain, nonatomic) _UITextServicesResponderProxy *responderProxy; // ivar: _responderProxy


-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)_addShortcut:(id)arg0 ;
-(void)_beginSessionWithType:(NSInteger)arg0 sender:(id)arg1 ;
-(void)_define:(id)arg0 ;
-(void)_removeShareController;
-(void)_removeShortcutController;
-(void)_share:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)finishSetup;


@end


#endif