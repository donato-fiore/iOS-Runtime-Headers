// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAPERFORMDATADETECTIONMATCH_H
#define SAPERFORMDATADETECTIONMATCH_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand, SAAceSerializable;


#import "SABaseCommand.h"

@interface SAPerformDataDetectionMatch : SABaseCommand <SAServerBoundCommand, SAAceSerializable>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *dataDetectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *length;
@property (copy, nonatomic) NSNumber *location;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *value;


+(id)performDataDetectionMatch;
+(id)performDataDetectionMatchWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif