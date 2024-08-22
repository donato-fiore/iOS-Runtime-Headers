// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACONFIDENCESCORES_H
#define SACONFIDENCESCORES_H

@class NSString, NSArray, NSNumber;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAConfidenceScores : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *assetVersion;
@property (copy, nonatomic) NSString *classifiedUser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lowScoreThreshold;
@property (nonatomic) NSInteger processedAudioDurationMilliseconds;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSArray *scores;
@property (copy, nonatomic) NSNumber *scoringSchemeVersion;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *thresholdType;
@property (copy, nonatomic) NSString *userIdentityClassification;


+(id)confidenceScores;
+(id)confidenceScoresWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif