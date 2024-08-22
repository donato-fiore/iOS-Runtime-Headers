// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMERGEABLEVALUEDOWNLOADTASK_H
#define CKMERGEABLEVALUEDOWNLOADTASK_H

@class NSString, CKMergeableValueID, CKRecord, CKMergeableRecordValue;

#import <Foundation/Foundation.h>


@interface CKMergeableValueDownloadTask : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) CKMergeableValueID *mergeableValueID; // ivar: _mergeableValueID
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKMergeableRecordValue *recordValue; // ivar: _recordValue




@end


#endif