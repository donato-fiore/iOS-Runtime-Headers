// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASFINISHSPEECH_H
#define SASFINISHSPEECH_H

@class NSString, NSArray, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *endpoint;
@property (copy, nonatomic) NSArray *featuresAtEndpoint;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *orderedContext;
@property (nonatomic) NSInteger packetCount;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat totalAudioRecorded;


+(id)finishSpeech;
+(id)finishSpeechWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif