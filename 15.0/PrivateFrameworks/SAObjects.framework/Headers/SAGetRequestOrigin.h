// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGETREQUESTORIGIN_H
#define SAGETREQUESTORIGIN_H

@class NSString, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *desiredAccuracy;
@property (copy, nonatomic) NSNumber *maxAge;
@property (copy, nonatomic) NSNumber *searchTimeout;


+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif