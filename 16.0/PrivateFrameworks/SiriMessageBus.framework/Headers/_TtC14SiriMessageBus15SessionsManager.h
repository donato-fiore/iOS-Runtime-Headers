// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC14SIRIMESSAGEBUS15SESSIONSMANAGER_H
#define _TTC14SIRIMESSAGEBUS15SESSIONSMANAGER_H

@class SwiftObject;



@interface _TtC14SiriMessageBus15SessionsManager : SwiftObject {
    ? expirationInSeconds;
    ? sessionEndDelayInSeconds;
    ? queue;
    ? assistantIdToSession;
    ? sessions;
    ? nextExpirationTaskTimeCheck;
    ? expirationScheduleTask;
    ? broker;
}






@end


#endif