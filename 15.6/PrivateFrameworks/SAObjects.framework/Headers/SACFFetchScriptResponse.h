// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFFETCHSCRIPTRESPONSE_H
#define SACFFETCHSCRIPTRESPONSE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SACFFetchScriptResponse : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *flowScripts;


+(id)fetchScriptResponse;
+(id)fetchScriptResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif