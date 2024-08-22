// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFCLOUDKITOPERATIONBATCH_H
#define PFCLOUDKITOPERATIONBATCH_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFCloudKitOperationBatch : NSObject {
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_recordTypeToDeletedRecordID;
    NSMutableArray *_records;
    NSMutableSet *_recordIDs;
    NSUInteger _sizeInBytes;
}




-(id)init;
-(void)dealloc;


@end


#endif