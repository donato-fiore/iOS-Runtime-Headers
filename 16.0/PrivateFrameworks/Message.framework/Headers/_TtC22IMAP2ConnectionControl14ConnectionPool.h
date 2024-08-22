// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC22IMAP2CONNECTIONCONTROL14CONNECTIONPOOL_H
#define _TTC22IMAP2CONNECTIONCONTROL14CONNECTIONPOOL_H

@class SwiftObject;



@interface _TtC22IMAP2ConnectionControl14ConnectionPool : SwiftObject {
    ? logger;
    ? queue;
    ? configuration;
    ? engineID;
    ? didTearDown;
    ? connections;
    ? engine;
    ? nextConnectionID;
    ? backoff;
    ? backoffTimer;
    ? backoffLoggingRateLimit;
    ? lastError;
    ? lastStatus;
    ? stateCapture;
    ? enqueuedEvents;
    ? limits;
}






@end


#endif