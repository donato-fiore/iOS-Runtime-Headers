// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAASSISTANTLOADED_H
#define SAASSISTANTLOADED_H

@class NSString, NSNumber, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *dataAnchor;
@property (copy, nonatomic) NSNumber *requestSync;
@property (copy, nonatomic) NSArray *syncAnchors;
@property (copy, nonatomic) NSString *version;


+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif