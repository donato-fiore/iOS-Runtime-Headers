// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCO15HOMEPODSETTINGS13CARRYSETTINGS14MESSAGECHANNEL_H
#define _TTCO15HOMEPODSETTINGS13CARRYSETTINGS14MESSAGECHANNEL_H

@protocol COMessageSessionConsumerDelegate, COMessageSessionProducerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCO15HomePodSettings13CarrySettings14MessageChannel : NSObject <COMessageSessionConsumerDelegate, COMessageSessionProducerDelegate>

 {
    ? role;
    ? cache;
    ? callbackMediators;
    ? channelLoader;
    ? dataModelUpdateSubject;
    ? dataModelUpdateTokens;
    ? dispatchQueue;
    ? installProfileSubject;
    ? installProfileTokens;
    ? foundSubject;
    ? lostSubject;
    ? logger;
}




-(?)consumer:(?)arg0 shouldStartSessionWithMember:(?)arg1 requestcompletionHandler;
-(?)producer:(?)arg0 shouldStartSessionWithMembercompletionHandler;
-(id)init;
-(void)channel:(id)arg0 didAddConsumer:(id)arg1 ;
-(void)channel:(id)arg0 didAddProducer:(id)arg1 ;
-(void)channel:(id)arg0 didFailToAddConsumerWithSubTopic:(id)arg1 error:(id)arg2 ;
-(void)channel:(id)arg0 didFailToAddProducerWithSubTopic:(id)arg1 error:(id)arg2 ;
-(void)consumer:(id)arg0 didStartSession:(id)arg1 ;
-(void)consumer:(id)arg0 didStopSession:(id)arg1 initiator:(id)arg2 notice:(id)arg3 error:(id)arg4 ;
-(void)producer:(id)arg0 didFailToStartSessionWithMember:(id)arg1 error:(id)arg2 ;
-(void)producer:(id)arg0 didStartSession:(id)arg1 member:(id)arg2 response:(id)arg3 ;
-(void)producer:(id)arg0 didStopSession:(id)arg1 initiator:(id)arg2 notice:(id)arg3 error:(id)arg4 ;


@end


#endif