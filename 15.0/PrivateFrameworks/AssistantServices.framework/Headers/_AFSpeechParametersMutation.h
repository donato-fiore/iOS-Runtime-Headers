// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFSPEECHPARAMETERSMUTATION_H
#define _AFSPEECHPARAMETERSMUTATION_H

@class NSString, NSArray, NSData, NSDictionary, NSURL, CLLocation;
@protocol AFSpeechParametersMutating;

#import <Foundation/Foundation.h>

#import "AFSpeechParameters.h"

@interface _AFSpeechParametersMutation : NSObject <AFSpeechParametersMutating>

 {
    AFSpeechParameters *_baseModel;
    NSString *_language;
    NSString *_interactionIdentifier;
    NSString *_task;
    NSArray *_loggingContext;
    NSString *_applicationName;
    NSData *_profile;
    NSDictionary *_overrides;
    NSURL *_modelOverrideURL;
    NSURL *_originalAudioFileURL;
    BOOL _narrowband;
    BOOL _detectUtterances;
    BOOL _censorSpeech;
    BOOL _farField;
    BOOL _secureOfflineOnly;
    BOOL _shouldStoreAudioOnDevice;
    CGFloat _maximumRecognitionDuration;
    NSString *_inputOrigin;
    CLLocation *_location;
    NSArray *_jitGrammar;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setApplicationName:(id)arg0 ;
-(void)setCensorSpeech:(BOOL)arg0 ;
-(void)setDetectUtterances:(BOOL)arg0 ;
-(void)setFarField:(BOOL)arg0 ;
-(void)setInputOrigin:(id)arg0 ;
-(void)setInteractionIdentifier:(id)arg0 ;
-(void)setJitGrammar:(id)arg0 ;
-(void)setLanguage:(id)arg0 ;
-(void)setLocation:(id)arg0 ;
-(void)setLoggingContext:(id)arg0 ;
-(void)setMaximumRecognitionDuration:(CGFloat)arg0 ;
-(void)setModelOverrideURL:(id)arg0 ;
-(void)setNarrowband:(BOOL)arg0 ;
-(void)setOriginalAudioFileURL:(id)arg0 ;
-(void)setOverrides:(id)arg0 ;
-(void)setProfile:(id)arg0 ;
-(void)setSecureOfflineOnly:(BOOL)arg0 ;
-(void)setShouldStoreAudioOnDevice:(BOOL)arg0 ;
-(void)setTask:(id)arg0 ;


@end


#endif