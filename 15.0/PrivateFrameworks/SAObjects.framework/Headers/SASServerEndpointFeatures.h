// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASSERVERENDPOINTFEATURES_H
#define SASSERVERENDPOINTFEATURES_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"

@interface SASServerEndpointFeatures : SABaseClientBoundCommand

@property (nonatomic) CGFloat eosLikelihood;
@property (nonatomic) NSInteger numOfWords;
@property (copy, nonatomic) NSArray *pauseCounts;
@property (nonatomic) NSInteger processedAudioDurationMs;
@property (nonatomic) CGFloat silenceProbability;
@property (copy, nonatomic) NSString *taskName;
@property (nonatomic) NSInteger trailingSilenceDuration;


+(id)serverEndpointFeatures;
+(id)serverEndpointFeaturesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif