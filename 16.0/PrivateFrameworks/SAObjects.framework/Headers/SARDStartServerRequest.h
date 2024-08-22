// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARDSTARTSERVERREQUEST_H
#define SARDSTARTSERVERREQUEST_H

@class NSString, NSArray, NSNumber, NSDictionary;


#import "SAStartRequest.h"

@interface SARDStartServerRequest : SAStartRequest

@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) BOOL textRequest;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif