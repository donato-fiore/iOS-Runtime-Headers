// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASSTARTSPEECH_H
#define SASSTARTSPEECH_H

@class NSString, NSNumber, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) BOOL clearContext;
@property (nonatomic) int codec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL disableAutoEndpointing;
@property (copy, nonatomic) NSString *dspStatus;
@property (nonatomic) BOOL enablePartialResults;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;


+(id)startSpeech;
+(id)startSpeechWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif