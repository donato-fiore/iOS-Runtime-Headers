// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMCATIMANIFEST_H
#define CDMCATIMANIFEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CDMCATIManifest : NSObject

@property (retain) NSString *GUID; // ivar: _GUID
@property float confidenceScoreThreshold; // ivar: _confidenceScoreThreshold
@property (retain) NSString *date; // ivar: _date
@property int expectedPositiveUtterances; // ivar: _expectedPositiveUtterances
@property (retain) NSDictionary *intentLookup; // ivar: _intentLookup
@property BOOL isPreGuidVersion; // ivar: _isPreGuidVersion
@property (retain) NSString *locale; // ivar: _locale
@property (retain) NSDictionary *manifest; // ivar: _manifest
@property BOOL manifestValid; // ivar: _manifestValid
@property (retain) NSDictionary *positiveOverrides; // ivar: _positiveOverrides
@property NSUInteger suppressionState; // ivar: _suppressionState
@property (retain) NSString *usoEdge; // ivar: _usoEdge
@property int usoElementId; // ivar: _usoElementId
@property (retain) NSString *usoEntity; // ivar: _usoEntity
@property (retain) NSString *usoVerb; // ivar: _usoVerb
@property (retain) NSString *version; // ivar: _version
@property (retain) NSDictionary *weights; // ivar: _weights


-(NSUInteger)getSuppressionState:(id)arg0 ;
-(float)getThresholdValue:(id)arg0 ;
-(id)getPositiveOverrideGuidsForModelType:(NSUInteger)arg0 ;
-(id)getWeightGuidsForModelType:(NSUInteger)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(int)getExpectedPositiveUtterancesValue:(id)arg0 ;
-(int)getUsoElementId:(id)arg0 ;
-(void)extractWeightsAndOverridesFromManifest:(id)arg0 ;
-(void)getWeightsAndOverridesAtIntentKeyFromManifest:(id)arg0 ;
-(void)getWeightsAndOverridesWithLegacyKeysFromManifest:(id)arg0 ;
-(void)readCatiManifest:(id)arg0 ;


@end


#endif