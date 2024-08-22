// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWORKFLOWCOLLECTIONRECORD_H
#define WFWORKFLOWCOLLECTIONRECORD_H

@class NSData, NSOrderedSet, WFWorkflowIcon, NSString;


#import "WFRecord.h"

@interface WFWorkflowCollectionRecord : WFRecord

@property (copy, nonatomic) NSData *cloudKitFolderRecordMetadata; // ivar: _cloudKitFolderRecordMetadata
@property (copy, nonatomic) NSData *cloudKitOrderingRecordMetadata; // ivar: _cloudKitOrderingRecordMetadata
@property (copy, nonatomic) NSOrderedSet *collectionOrdering; // ivar: _collectionOrdering
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (readonly, nonatomic, getter=isFolder) BOOL folder; // ivar: _folder
@property (retain, nonatomic) WFWorkflowIcon *icon; // ivar: _icon
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrdering; // ivar: _lastRemoteCollectionOrdering
@property (copy, nonatomic) NSOrderedSet *lastRemoteCollectionOrderingSubset; // ivar: _lastRemoteCollectionOrderingSubset
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrdering; // ivar: _lastRemoteShortcutOrdering
@property (copy, nonatomic) NSOrderedSet *lastRemoteShortcutOrderingSubset; // ivar: _lastRemoteShortcutOrderingSubset
@property (nonatomic) NSInteger lastSyncedHash; // ivar: _lastSyncedHash
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSOrderedSet *shortcutOrdering; // ivar: _shortcutOrdering


-(NSInteger)computedSyncHash;


@end


#endif