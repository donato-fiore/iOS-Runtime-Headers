// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONSYNCENGINE13METADATASTORE_H
#define _TTC17SESSIONSYNCENGINE13METADATASTORE_H

@class SwiftObject;



@interface _TtC17SessionSyncEngine13MetadataStore : SwiftObject {
    ? deviceObsoletionDuration;
    ? tombstoneObsoletionDuration;
    ? maximumUnsyncedRecordCount;
    ? persistentStore;
    ? recordMetadataByRecordID;
    ? recordIDSyncDatesByPairedDeviceIdentifier;
    ? initialSyncPairedDeviceIdentifiers;
}






@end


#endif