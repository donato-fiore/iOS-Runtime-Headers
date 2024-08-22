// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SABASECLIENTBOUNDCOMMAND_H
#define SABASECLIENTBOUNDCOMMAND_H

@class NSString, NSArray, NSNumber;
@protocol SAClientBoundCommand;


#import "SABaseCommand.h"

@interface SABaseClientBoundCommand : SABaseCommand <SAClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *metricsContext;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *usefulnessScore;


+(id)baseClientBoundCommand;
+(id)baseClientBoundCommandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif