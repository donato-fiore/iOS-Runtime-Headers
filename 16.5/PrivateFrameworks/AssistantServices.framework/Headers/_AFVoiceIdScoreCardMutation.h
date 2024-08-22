// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFVOICEIDSCORECARDMUTATION_H
#define _AFVOICEIDSCORECARDMUTATION_H

@class NSNumber, NSDictionary, NSString;
@protocol AFVoiceIdScoreCardMutating;

#import <Foundation/Foundation.h>

#import "AFVoiceIdScoreCard.h"

@interface _AFVoiceIdScoreCardMutation : NSObject <AFVoiceIdScoreCardMutating>

 {
    AFVoiceIdScoreCard *_base;
    NSNumber *_spIdAudioProcessedDuration;
    NSNumber *_spIdUnknownUserScore;
    NSDictionary *_spIdKnownUserScores;
    NSNumber *_spIdUserScoresVersion;
    NSString *_spIdScoreThresholdingType;
    NSString *_spIdAssetVersion;
    NSString *_userClassified;
    NSInteger _userIdentityClassification;
    NSNumber *_lowScoreThreshold;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSInteger)getUserIdentityClassification;
-(id)getLowScoreThreshold;
-(id)getSpIdAssetVersion;
-(id)getSpIdAudioProcessedDuration;
-(id)getSpIdKnownUserScores;
-(id)getSpIdScoreThresholdingType;
-(id)getSpIdUnknownUserScore;
-(id)getSpIdUserScoresVersion;
-(id)getUserClassified;
-(id)initWithBase:(id)arg0 ;
-(void)setLowScoreThreshold:(id)arg0 ;
-(void)setSpIdAssetVersion:(id)arg0 ;
-(void)setSpIdAudioProcessedDuration:(id)arg0 ;
-(void)setSpIdKnownUserScores:(id)arg0 ;
-(void)setSpIdScoreThresholdingType:(id)arg0 ;
-(void)setSpIdUnknownUserScore:(id)arg0 ;
-(void)setSpIdUserScoresVersion:(id)arg0 ;
-(void)setUserClassified:(id)arg0 ;
-(void)setUserIdentityClassification:(NSInteger)arg0 ;


@end


#endif