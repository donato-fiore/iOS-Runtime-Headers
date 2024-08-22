// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRSPEAKERRECOGNITIONSCORER_H
#define SSRSPEAKERRECOGNITIONSCORER_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface SSRSpeakerRecognitionScorer : NSObject {
    *void _novDetect;
    NSUInteger _offsetsType;
}


@property (retain, nonatomic) NSURL *configFilePath; // ivar: _configFilePath
@property (retain, nonatomic) NSURL *modelFilePath; // ivar: _modelFilePath
@property (readonly, nonatomic) NSString *profileID; // ivar: _profileID
@property (readonly, nonatomic) NSString *psrConfigFilePath;
@property (readonly, nonatomic) NSString *psrConfigRoot;
@property (retain, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly, nonatomic) BOOL satModelAvailable; // ivar: _satModelAvailable
@property (readonly, nonatomic) NSString *sysConfigRoot;


+(id)createVoiceScorersWithVoiceProfiles:(id)arg0 withConfigFile:(id)arg1 withResourceFile:(id)arg2 withOffsetsType:(NSUInteger)arg3 ;
-(BOOL)resetScorerWithModelFilePath:(id)arg0 ;
-(CGFloat)_getFloatValueForNDAPIConfigOption:(id)arg0 defaultValue:(CGFloat)arg1 ;
-(CGFloat)_getFloatValueFromConfigurationName:(id)arg0 defaultTo:(CGFloat)arg1 ;
-(NSUInteger)getSATVectorCount;
-(float)_satLogitCeilScore;
-(float)_satLogitFloorScore;
-(float)_satScoreNonVTOffset;
-(float)_satScoreNonVTScale;
-(float)_satScoreVTOffset;
-(float)_satScoreVTScale;
-(float)analyzeSpeakerVector:(id)arg0 withDimensions:(NSUInteger)arg1 withThresholdType:(NSUInteger)arg2 ;
-(float)analyzeSuperVector:(id)arg0 withDimensions:(NSUInteger)arg1 withThresholdType:(NSUInteger)arg2 ;
-(float)normalizedScoreFromRawScore:(float)arg0 forScoreType:(NSUInteger)arg1 ;
-(float)scoreSpeakerVector:(id)arg0 withDimensions:(NSUInteger)arg1 withThresholdType:(NSUInteger)arg2 ;
-(id)_getOptionValueFromConfigurationName:(id)arg0 ;
-(id)_getStringValueFromConfigurationName:(id)arg0 defaultTo:(id)arg1 ;
-(id)_getValueForNDAPIConfigOption:(id)arg0 ;
-(id)getSpeakerVectorAtIndex:(NSUInteger)arg0 ;
-(id)initWithProfileID:(id)arg0 withModelFile:(id)arg1 withConfigFile:(id)arg2 withResourceFile:(id)arg3 withOffsetsType:(NSUInteger)arg4 ;
-(int)_getIntValueFromConfigurationName:(id)arg0 defaultTo:(int)arg1 ;
-(void)dealloc;
-(void)deleteVectorAtIndex:(int)arg0 ;
-(void)resetForNewRequest;
-(void)updateSAT;


@end


#endif