// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALOCALSEARCHSENDTOPROTOBUFCONDUIT_H
#define SALOCALSEARCHSENDTOPROTOBUFCONDUIT_H

@class NSArray, NSURL, NSData;


#import "SADomainCommand.h"

@interface SALocalSearchSendToProtobufConduit : SADomainCommand

@property (copy, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSURL *endpoint;
@property (copy, nonatomic) NSData *rawRequest;
@property (nonatomic) NSInteger timeoutInSeconds;


+(id)sendToProtobufConduit;
+(id)sendToProtobufConduitWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif