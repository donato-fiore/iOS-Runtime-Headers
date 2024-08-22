// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12SYNCEDMODELS21SYNCEDMODELCONTROLLER_H
#define _TTC12SYNCEDMODELS21SYNCEDMODELCONTROLLER_H

@class SwiftObject;



@interface _TtC12SyncedModels21SyncedModelController : SwiftObject {
    ? _manager;
    ? _uuid;
    ? _type;
    ? _properties;
    ? _transaction;
    ? transactionLock;
    ? _ownershipUUID;
    ? _ownerUUIDsToParticipants;
    ? _authorityParticipant;
    ? _ownerUUID;
    ? _ownershipRequestHandler;
    ? _ownershipCounter;
    ? cancellables;
    ? _pendingOwnershipRequest;
    ? _ownershipRequestsAwaitingReply;
    ? _ownershipRequestsAwaitingHandoffReply;
    ? ownershipChangedHandler;
    ? status;
}






@end


#endif