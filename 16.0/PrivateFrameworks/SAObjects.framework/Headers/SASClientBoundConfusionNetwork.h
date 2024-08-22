// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASCLIENTBOUNDCONFUSIONNETWORK_H
#define SASCLIENTBOUNDCONFUSIONNETWORK_H

@class NSString;


#import "SABaseClientBoundCommand.h"
#import "SASRecognition.h"

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *rawRecognition;
@property (copy, nonatomic) NSString *sessionId;


+(id)clientBoundConfusionNetwork;
+(id)clientBoundConfusionNetworkWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif