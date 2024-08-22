// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSPHISTORYREPLICAPLACEHOLDERRECORD_H
#define _MSPHISTORYREPLICAPLACEHOLDERRECORD_H

@class NSData, NSString, NSDate;
@protocol MSPHistoryReplicaRecord, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MSPVectorTimestamp.h"

@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *contents; // ivar: _contents
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp; // ivar: _contentsTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContents:(id)arg0 contentsTimestamp:(id)arg1 modificationDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif