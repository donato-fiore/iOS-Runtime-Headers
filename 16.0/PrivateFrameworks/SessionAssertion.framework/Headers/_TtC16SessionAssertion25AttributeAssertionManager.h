// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16SESSIONASSERTION25ATTRIBUTEASSERTIONMANAGER_H
#define _TTC16SESSIONASSERTION25ATTRIBUTEASSERTIONMANAGER_H

@class SwiftObject;
@protocol _TtP16SessionAssertion18AssertionXPCClient_;



@interface _TtC16SessionAssertion25AttributeAssertionManager : SwiftObject <_TtP16SessionAssertion18AssertionXPCClient_>

 {
    ? lock;
    ? assertionClient;
    ? _lock_assertions;
}




-(void)didConnect;
-(void)didInvalidateWithInvalidationMessage:(id)arg0 ;


@end


#endif