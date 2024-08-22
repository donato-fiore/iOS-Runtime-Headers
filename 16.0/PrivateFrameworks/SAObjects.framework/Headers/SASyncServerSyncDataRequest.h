// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASYNCSERVERSYNCDATAREQUEST_H
#define SASYNCSERVERSYNCDATAREQUEST_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASyncServerSyncDataRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *clientGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *syncToken;
@property (copy, nonatomic) NSString *syncType;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif