// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAREMOVEFROMACTIVITYSTREAM_H
#define SAREMOVEFROMACTIVITYSTREAM_H

@class NSString, NSDate;


#import "SABaseClientBoundCommand.h"

@interface SARemoveFromActivityStream : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSDate *fromDate;
@property (copy, nonatomic) NSString *streamType;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDate *toDate;
@property (copy, nonatomic) NSString *visibility;


+(id)removeFromActivityStream;
+(id)removeFromActivityStreamWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif