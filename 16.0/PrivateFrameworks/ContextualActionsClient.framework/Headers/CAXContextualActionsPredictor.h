// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAXCONTEXTUALACTIONSPREDICTOR_H
#define CAXCONTEXTUALACTIONSPREDICTOR_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface CAXContextualActionsPredictor : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionDecoder; // ivar: _actionDecoder
@property (retain, nonatomic) NSMutableDictionary *actionEncoder; // ivar: _actionEncoder
@property (retain, nonatomic) NSURL *configUrl; // ivar: _configUrl
@property (retain, nonatomic) NSURL *decoderUrl; // ivar: _decoderUrl
@property (retain, nonatomic) NSURL *encoderUrl; // ivar: _encoderUrl
@property (retain, nonatomic) NSMutableDictionary *model; // ivar: _model
@property (retain, nonatomic) NSURL *modelUrl; // ivar: _modelUrl
@property (retain, nonatomic) NSMutableDictionary *typeDecoder; // ivar: _typeDecoder
@property (retain, nonatomic) NSMutableDictionary *typeEncoder; // ivar: _typeEncoder


+(id)bigramDictKey;
+(id)decoderFileName;
+(id)defaultCoderUrlForName:(id)arg0 ;
+(id)defaultConfigFileUrl;
+(id)defaultGlobalModelUrl;
+(id)defaultPersonalizedModelUrl;
+(id)encoderFileName;
+(id)frequencyDictKey;
+(id)ioDictKey;
+(id)ioNoneType;
+(id)personalizedModelFileName;
+(id)unigramDictKey;
-(id)convertToStringEncodedActionSequence:(id)arg0 ;
-(id)encodeActionSequence:(id)arg0 ;
-(id)encodeContentTypes:(id)arg0 ;
-(id)extractCAElementsByOrderingCounterDictByValue:(id)arg0 ;
-(id)extractInputTypesAsCAXContentFromActionId:(id)arg0 ;
-(id)getWFContentTypeStringFromContentTypeString:(id)arg0 ;
-(id)initWithDefaultCodersAndModelUrl:(id)arg0 configUrl:(id)arg1 ;
-(id)initWithModelUrl:(id)arg0 configUrl:(id)arg1 ;
-(id)initWithModelUrl:(id)arg0 encoderUrl:(id)arg1 decoderUrl:(id)arg2 configUrl:(id)arg3 ;
-(id)predictNumActions:(NSUInteger)arg0 givenContext:(id)arg1 ;
-(void)addEncodedActionSequence:(id)arg0 toFrequencyDict:(id)arg1 ;
-(void)addKeyString:(id)arg0 andValueString:(id)arg1 toCounterDict:(id)arg2 ;
-(void)addModelResults:(id)arg0 toFinalResults:(id)arg1 withNumActions:(NSUInteger)arg2 seenSet:(id)arg3 ;
-(void)combineDict:(id)arg0 withSourceDict:(id)arg1 ;
-(void)fillNormalizedFrequencyValuesOnPredictions:(id)arg0 ;
-(void)loadCoderFilesToInstanceFromDefaulUrls;
-(void)loadCoderFilesToInstanceFromEncoderUrl:(id)arg0 decoderUrl:(id)arg1 ;
-(void)loadModelsFromUrl:(id)arg0 ;
-(void)persistCoderFileChangesToEncoderUrl:(id)arg0 decoderUrl:(id)arg1 ;
-(void)saveModelToUrl:(id)arg0 ;
-(void)updateModelWithSummary:(id)arg0 ;


@end


#endif