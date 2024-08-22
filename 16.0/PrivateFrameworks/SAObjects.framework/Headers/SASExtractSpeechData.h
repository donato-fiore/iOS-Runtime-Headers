// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASEXTRACTSPEECHDATA_H
#define SASEXTRACTSPEECHDATA_H

@class NSString, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *audioOutputType;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *speechRequestId;
@property (copy, nonatomic) NSNumber *startTime;


+(id)extractSpeechData;
+(id)extractSpeechDataWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif