// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC4GRDB8DATABASE_H
#define _TTC4GRDB8DATABASE_H

@class SwiftObject;



@interface _TtC4GRDB8Database : SwiftObject {
    ? sqliteConnection;
    ? configuration;
    ? description;
    ? _lastSchemaVersion;
    ? schemaCache;
    ? $__lazy_storage_$_internalStatementCache;
    ? $__lazy_storage_$_publicStatementCache;
    ? $__lazy_storage_$_authorizer;
    ? $__lazy_storage_$_observationBroker;
    ? isRecordingSelectedRegion;
    ? selectedRegion;
    ? isInsideTransactionBlock;
    ? _isSuspended;
    ? journalModeCache;
    ? busyCallback;
    ? trace;
    ? functions;
    ? collations;
    ? _readOnlyDepth;
}






@end


#endif