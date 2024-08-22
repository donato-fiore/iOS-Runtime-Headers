// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10SESSIONKIT21SESSIONLISTENERCLIENT_H
#define _TTC10SESSIONKIT21SESSIONLISTENERCLIENT_H

@class SwiftObject;
@protocol _TtP10SessionKit24SessionListenerXPCClient_;



@interface _TtC10SessionKit21SessionListenerClient : SwiftObject <_TtP10SessionKit24SessionListenerXPCClient_>

 {
    ? identifier;
    ? singleton;
}




-(void)sessionDescriptorsChangedWithDescriptors:(id)arg0 completion:(id)arg1 ;
-(void)sessionsEndedWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)sessionsUpdatedWithUpdates:(id)arg0 completion:(id)arg1 ;


@end


#endif