// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASYNCGETCACHEDSYNCANCHORS_H
#define SASYNCGETCACHEDSYNCANCHORS_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *interactionId;


+(id)getCachedSyncAnchors;
+(id)getCachedSyncAnchorsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif