// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPCOLLECTIONITEMRECORD_H
#define MSPCOLLECTIONITEMRECORD_H

@class NSData, NSString;
@protocol MSPOrderedReplicaRecord, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSPVectorTimestamp.h"
#import "MSPPosition.h"

@interface MSPCollectionItemRecord : NSObject <MSPOrderedReplicaRecord, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MSPPosition *position; // ivar: _position
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp; // ivar: _positionTimestamp
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(BOOL)supportsSecureCoding;
+(id)recordWithContentsOfRecord:(id)arg0 ;
+(id)recordsByApplyingEdits:(id)arg0 toArbitraryRecords:(id)arg1 ;
+(id)tombstoneRecord;
-(id)derivedRecordWithContents:(id)arg0 contentsTimestamp:(id)arg1 ;
-(id)derivedRecordWithPosition:(id)arg0 positionTimestamp:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 position:(id)arg2 positionTimestamp:(id)arg3 ;
-(id)initWithValue:(id)arg0 contentsTimestamp:(id)arg1 position:(id)arg2 positionTimestamp:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif