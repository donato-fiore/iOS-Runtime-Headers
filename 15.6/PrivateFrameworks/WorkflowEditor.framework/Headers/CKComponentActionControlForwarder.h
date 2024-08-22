// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTACTIONCONTROLFORWARDER_H
#define CKCOMPONENTACTIONCONTROLFORWARDER_H


#import <Foundation/Foundation.h>


@interface CKComponentActionControlForwarder : NSObject {
    CKTypedComponentAction<UIEvent *> _action;
}




-(id)initWithAction:(struct CKTypedComponentAction<UIEvent *> )arg0 ;
-(void)handleControlEventFromSender:(id)arg0 withEvent:(id)arg1 ;


@end


#endif