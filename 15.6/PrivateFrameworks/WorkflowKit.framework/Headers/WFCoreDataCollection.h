// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATACOLLECTION_H
#define WFCOREDATACOLLECTION_H

@class NSManagedObject, NSData, NSArray, NSOrderedSet, NSString, NSSet;
@protocol WFRecordStorage;


#import "WFCoreDataWorkflowIcon.h"
#import "WFWorkflowIcon.h"

@interface WFCoreDataCollection : NSManagedObject <WFRecordStorage>



@property (retain, nonatomic) NSData *cloudKitFolderRecordMetadata;
@property (retain, nonatomic) NSData *cloudKitOrderingRecordMetadata;
@property (copy, nonatomic) NSArray *collectionOrdering;
@property (retain, nonatomic) NSOrderedSet *collections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrdering;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteCollectionOrderingSubset;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrdering;
@property (copy, nonatomic) NSOrderedSet *deserializedLastRemoteShortcutOrderingSubset;
@property (readonly, nonatomic, getter=isFolder) BOOL folder;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFCoreDataWorkflowIcon *icon;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingData;
@property (retain, nonatomic) NSData *lastRemoteCollectionOrderingSubsetData;
@property (retain, nonatomic) NSData *lastRemoteShortcutOrderingData;
@property (retain, nonatomic) NSData *lastRemoteShortcutOrderingSubsetData;
@property (nonatomic) NSInteger lastSyncedHash;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *parents;
@property (copy, nonatomic) NSArray *shortcutOrdering;
@property (retain, nonatomic) NSOrderedSet *shortcuts;
@property (readonly) Class superclass;
@property (nonatomic) BOOL tombstoned;
@property (retain, nonatomic) WFWorkflowIcon *workflowIcon;


+(id)fetchRequest;
+(id)recordPropertyMap;
-(id)descriptor;


@end


#endif