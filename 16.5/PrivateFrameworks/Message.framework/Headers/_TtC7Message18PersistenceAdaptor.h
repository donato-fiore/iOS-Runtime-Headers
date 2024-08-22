// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7MESSAGE18PERSISTENCEADAPTOR_H
#define _TTC7MESSAGE18PERSISTENCEADAPTOR_H

@class SwiftObject;



@interface _TtC7Message18PersistenceAdaptor : SwiftObject {
    ? _nextActionID;
    ? _sendReply;
    ? messagesBeingDownloaded;
    ? _mailboxPathSeparator;
    ? didTearDown;
    ? pendingMailboxActivities;
    ? mailboxActivities;
    ? statusIsolationQueue;
    ? account;
    ? workQueueKey;
    ? workQueue;
    ? opaqueIDCoder;
    ? nameMapping;
    ? userVisibleMailboxes;
    ? logger;
    ? _allLocalMessageActions;
    ? _allLocalMailboxActions;
    ? lastKnownLocalAction;
    ? downloads;
    ? searches;
    ? clientStateObserver;
    ? cancelationToken;
    ? runningSyncs;
    ? currentBackFillSync;
    ? mailboxPersistenceHelperCache;
    ? stateCapture;
}






@end


#endif