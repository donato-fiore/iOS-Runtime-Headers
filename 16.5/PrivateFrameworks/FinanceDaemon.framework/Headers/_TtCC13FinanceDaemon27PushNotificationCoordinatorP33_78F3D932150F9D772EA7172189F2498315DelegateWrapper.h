// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC13FINANCEDAEMON27PUSHNOTIFICATIONCOORDINATORP33_78F3D932150F9D772EA7172189F2498315DELEGATEWRAPPER_H
#define _TTCC13FINANCEDAEMON27PUSHNOTIFICATIONCOORDINATORP33_78F3D932150F9D772EA7172189F2498315DELEGATEWRAPPER_H

@protocol APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC13FinanceDaemon27PushNotificationCoordinatorP33_78F3D932150F9D772EA7172189F2498315DelegateWrapper : NSObject <APSConnectionDelegate>

 {
    ? delegate;
}




-(id)init;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forInfo:(id)arg2 ;


@end


#endif