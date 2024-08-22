// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASESSIONHANDOFFPAYLOAD_H
#define SASESSIONHANDOFFPAYLOAD_H

@class NSString, NSData;
@protocol SAHandoffPayload;


#import "AceObject.h"

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *sessionHandoffData;
@property (readonly) Class superclass;


+(id)sessionHandoffPayload;
+(id)sessionHandoffPayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif