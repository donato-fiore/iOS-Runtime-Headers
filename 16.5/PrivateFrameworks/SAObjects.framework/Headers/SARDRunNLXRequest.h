// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARDRUNNLXREQUEST_H
#define SARDRUNNLXREQUEST_H

@class NSNumber, NSString;


#import "SABaseClientBoundCommand.h"
#import "SASRecognition.h"

@interface SARDRunNLXRequest : SABaseClientBoundCommand

@property (retain, nonatomic) SASRecognition *asrOutput;
@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (copy, nonatomic) NSString *userId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif