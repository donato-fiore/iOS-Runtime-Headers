// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAURIHANDOFFPAYLOAD_H
#define SAURIHANDOFFPAYLOAD_H

@class NSString, NSURL;
@protocol SAHandoffPayload;


#import "AceObject.h"

@interface SAURIHandoffPayload : AceObject <SAHandoffPayload>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *link;
@property (readonly) Class superclass;


+(id)uRIHandoffPayload;
+(id)uRIHandoffPayloadWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif