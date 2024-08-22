// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7MESSAGE18PERSISTENCEADAPTOR_H
#define _TTC7MESSAGE18PERSISTENCEADAPTOR_H

@class SwiftObject;



@interface _TtC7Message18PersistenceAdaptor : SwiftObject {
    ? _nextActionID;
    ? _sendReply;
    ? messagesBeingDownloaded;
    ? _mailboxPathSeparator;
    ? didTearDown;
    ? lastActivity;
    ? emailActivities;
    ? statusIsolationQueue;
    ? account;
    ? workQueue;
    ? opaqueIDCoder;
    ? nameMapping;
    ? logger;
    ? _allLocalMessageActions;
    ? _allLocalMailboxActions;
    ? lastKnownLocalAction;
    ? downloads;
    ? clientStateObserver;
    ? cancelationToken;
    ? runningSyncs;
    ? currentBackFillSync;
}






@end


#endif