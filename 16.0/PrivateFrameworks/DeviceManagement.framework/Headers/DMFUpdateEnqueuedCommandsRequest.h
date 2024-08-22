// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFUPDATEENQUEUEDCOMMANDSREQUEST_H
#define DMFUPDATEENQUEUEDCOMMANDSREQUEST_H

@class NSArray, NSString;


#import "DMFTaskRequest.h"

@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest

@property (copy, nonatomic) NSArray *addCommands; // ivar: _addCommands
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (copy, nonatomic) NSArray *removeCommands; // ivar: _removeCommands


+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif