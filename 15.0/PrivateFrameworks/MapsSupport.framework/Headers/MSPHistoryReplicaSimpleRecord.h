// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPHISTORYREPLICASIMPLERECORD_H
#define MSPHISTORYREPLICASIMPLERECORD_H

@class NSData, NSString, NSDate;
@protocol MSPHistoryReplicaRecord;

#import <Foundation/Foundation.h>

#import "MSPVectorTimestamp.h"

@interface MSPHistoryReplicaSimpleRecord : NSObject <MSPHistoryReplicaRecord>



@property (readonly, copy, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly) Class superclass;


+(id)recordWithContentsOfRecord:(id)arg0 ;
+(id)recordsByApplyingEdits:(id)arg0 toArbitraryRecords:(id)arg1 ;
-(id)derivedRecordWithContents:(id)arg0 contentsTimestamp:(id)arg1 ;
-(id)derivedRecordWithModificationDate:(id)arg0 ;
-(id)init;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 modificationDate:(id)arg2 ;


@end


#endif