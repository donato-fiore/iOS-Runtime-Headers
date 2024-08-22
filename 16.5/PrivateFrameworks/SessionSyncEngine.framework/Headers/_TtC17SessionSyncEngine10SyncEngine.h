// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17SESSIONSYNCENGINE10SYNCENGINE_H
#define _TTC17SESSIONSYNCENGINE10SYNCENGINE_H

@class SwiftObject;



@interface _TtC17SessionSyncEngine10SyncEngine : SwiftObject {
    ? role;
    ? syncService;
    ? metadataStore;
    ? keybag;
    ? queue;
    ? retryTimer;
    ? sourcesByZone;
    ? inflightExpirationTimer;
    ? inflightExpirationTime;
    ? inflightMetadataByRequestIdentifier;
    ? inflightDateByRequestIdentifier;
    ? inflightMetadata;
    ? keybagSubscription;
    ? localDeviceIdentifierOverride;
    ? lock;
    ? _lock_pairedDevice;
    ? _queue_syncState;
    ? _queue_didReceiveAckMessage;
    ? _queue_didReceiveUnlockMessage;
    ? _queue_didFireMetadataExpirationTimer;
    ? _queue_didFireRetryTimer;
    ? _queue_didExhaustRetryTimer;
}






@end


#endif