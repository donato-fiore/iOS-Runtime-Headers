// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFVOICEIDSCORECARD_H
#define AFVOICEIDSCORECARD_H

@class NSString, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFVoiceIdScoreCard : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *lowScoreThreshold; // ivar: _lowScoreThreshold
@property (readonly, copy, nonatomic) NSString *spIdAssetVersion; // ivar: _spIdAssetVersion
@property (readonly, copy, nonatomic) NSNumber *spIdAudioProcessedDuration; // ivar: _spIdAudioProcessedDuration
@property (readonly, copy, nonatomic) NSDictionary *spIdKnownUserScores; // ivar: _spIdKnownUserScores
@property (readonly, copy, nonatomic) NSString *spIdScoreThresholdingType; // ivar: _spIdScoreThresholdingType
@property (readonly, copy, nonatomic) NSNumber *spIdUnknownUserScore; // ivar: _spIdUnknownUserScore
@property (readonly, copy, nonatomic) NSNumber *spIdUserScoresVersion; // ivar: _spIdUserScoresVersion
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userClassified; // ivar: _userClassified
@property (readonly, nonatomic) NSInteger userIdentityClassification; // ivar: _userIdentityClassification


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSpIdAudioProcessedDuration:(id)arg0 spIdUnknownUserScore:(id)arg1 spIdKnownUserScores:(id)arg2 spIdUserScoresVersion:(id)arg3 spIdScoreThresholdingType:(id)arg4 spIdAssetVersion:(id)arg5 userClassified:(id)arg6 userIdentityClassification:(NSInteger)arg7 ;
-(id)initWithSpIdAudioProcessedDuration:(id)arg0 spIdUnknownUserScore:(id)arg1 spIdKnownUserScores:(id)arg2 spIdUserScoresVersion:(id)arg3 spIdScoreThresholdingType:(id)arg4 spIdAssetVersion:(id)arg5 userClassified:(id)arg6 userIdentityClassification:(NSInteger)arg7 lowScoreThreshold:(id)arg8 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif