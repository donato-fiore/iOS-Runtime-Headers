// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVOICEPROFILERETRAININGCONTEXT_H
#define SSRVOICEPROFILERETRAININGCONTEXT_H

@class CSAsset, NSArray, NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "SSRLoggingAggregator.h"
#import "SSRVoiceProfile.h"

@interface SSRVoiceProfileRetrainingContext : NSObject

@property (retain, nonatomic) CSAsset *asset; // ivar: _asset
@property (readonly, nonatomic) float combinationWeight; // ivar: _combinationWeight
@property (retain, nonatomic) NSArray *compareVoiceProfileArray; // ivar: _compareVoiceProfileArray
@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) BOOL filterToVoiceTriggerUtterances; // ivar: _filterToVoiceTriggerUtterances
@property (readonly, nonatomic) BOOL forceRetrain; // ivar: _forceRetrain
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator; // ivar: _logAggregator
@property (readonly, nonatomic) NSUInteger maxAllowedSpeakerVectors; // ivar: _maxAllowedSpeakerVectors
@property (readonly, nonatomic) NSDictionary *modelsContext; // ivar: _modelsContext
@property (readonly, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (readonly, nonatomic) NSUInteger spIdType; // ivar: _spIdType
@property (retain, nonatomic) SSRVoiceProfile *voiceProfile; // ivar: _voiceProfile


-(id)description;
-(id)initWithVoiceRetrainingContext:(id)arg0 error:(*id)arg1 ;


@end


#endif