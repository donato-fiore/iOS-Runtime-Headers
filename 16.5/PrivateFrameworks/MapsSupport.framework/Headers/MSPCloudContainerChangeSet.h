// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCLOUDCONTAINERCHANGESET_H
#define MSPCLOUDCONTAINERCHANGESET_H

@class NSMutableSet, NSLock, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface MSPCloudContainerChangeSet : NSObject {
    NSMutableSet *_changes;
    NSMutableSet *_deletes;
    NSLock *_lock;
}


@property (readonly, nonatomic) NSDictionary *allChangesById;
@property (readonly, nonatomic) NSArray *changedRecords;
@property (readonly, nonatomic) NSArray *deletedRecords;
@property (readonly, nonatomic) BOOL hasChanges;


-(id)description;
-(id)init;
-(id)threadSafeArrayFromSet:(id)arg0 ;
-(void)addChangedRecord:(id)arg0 ;
-(void)addDeletedRecord:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)threadSafeAddReplicaRecord:(id)arg0 toSet:(id)arg1 ;


@end


#endif