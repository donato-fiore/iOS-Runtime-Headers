// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAINTENTGROUPSIRIKITCLEARCONTEXT_H
#define SAINTENTGROUPSIRIKITCLEARCONTEXT_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *reason;


+(id)siriKitClearContext;
+(id)siriKitClearContextWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)siriKitClearContextWithReason:(id)arg0 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;
-(id)initWithReason:(id)arg0 ;


@end


#endif