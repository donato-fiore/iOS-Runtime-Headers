// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SIRIKITFLOW29ANONYMOUSLNCONNECTIONDELEGATE_H
#define _TTC11SIRIKITFLOW29ANONYMOUSLNCONNECTIONDELEGATE_H

@protocol LNActionExecutorDelegate;

#import <Foundation/Foundation.h>


@interface _TtC11SiriKitFlow29AnonymousLNConnectionDelegate : NSObject <LNActionExecutorDelegate>

 {
    ? continuation;
}




-(id)init;
-(void)executor:(id)arg0 didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)executor:(id)arg0 needsActionConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsConfirmationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsDisambiguationWithRequest:(id)arg1 ;
-(void)executor:(id)arg0 needsValueWithRequest:(id)arg1 ;


@end


#endif