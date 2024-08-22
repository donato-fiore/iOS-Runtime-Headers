// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAFETCHACTIVITYSTREAM_H
#define SAFETCHACTIVITYSTREAM_H

@class NSString, NSDate, NSNumber, NSArray, NSDictionary;
@protocol SAAceSerializable;


#import "SABaseClientBoundCommand.h"

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>



@property (copy, nonatomic) NSString *activityType;
@property (nonatomic) BOOL ascending;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *fromDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *limit;
@property (copy, nonatomic) NSArray *matchingMetadataKeys;
@property (copy, nonatomic) NSDictionary *matchingMetadataKeysAndStringValues;
@property (copy, nonatomic) NSString *sortBy;
@property (copy, nonatomic) NSArray *streamTypes;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;


+(id)fetchActivityStream;
+(id)fetchActivityStreamWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif