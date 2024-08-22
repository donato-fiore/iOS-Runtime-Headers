// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBCLOUDZONERECORDPUSHRESULT_H
#define HMBCLOUDZONERECORDPUSHRESULT_H

@class HMFObject, NSSet, NSError;



@interface HMBCloudZoneRecordPushResult : HMFObject

@property (readonly, copy) NSSet *conflicts; // ivar: _conflicts
@property (readonly, copy) NSSet *deletedRecordIDs; // ivar: _deletedRecordIDs
@property (readonly, copy) NSError *fatalError; // ivar: _fatalError
@property (readonly, copy) NSSet *updatedRecords; // ivar: _updatedRecords


-(id)initWithUpdatedRecords:(id)arg0 deletedRecordIDs:(id)arg1 conflicts:(id)arg2 fatalError:(id)arg3 ;
-(id)initWithUpdatedRecords:(id)arg0 deletedRecordIDs:(id)arg1 error:(id)arg2 ;
-(id)pushResultByMergingWithPushResult:(id)arg0 ;


@end


#endif