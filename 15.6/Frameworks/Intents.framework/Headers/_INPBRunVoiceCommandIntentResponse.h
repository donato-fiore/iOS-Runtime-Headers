// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBRUNVOICECOMMANDINTENTRESPONSE_H
#define _INPBRUNVOICECOMMANDINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBDictionary.h"
#import "_INPBArchivedObject.h"

@interface _INPBRunVoiceCommandIntentResponse : PBCodable <_INPBRunVoiceCommandIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (nonatomic) BOOL continueRunning; // ivar: _continueRunning
@property (nonatomic) BOOL customResponsesDisabled; // ivar: _customResponsesDisabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL hasContinueRunning;
@property (nonatomic) BOOL hasCustomResponsesDisabled;
@property (nonatomic) BOOL hasIntentCategory;
@property (nonatomic) BOOL hasInterstitialDisabled;
@property (readonly, nonatomic) BOOL hasLocalizedAppName;
@property (readonly, nonatomic) BOOL hasParameters;
@property (nonatomic) BOOL hasPrefersExecutionOnCompanion;
@property (readonly, nonatomic) BOOL hasResponseTemplate;
@property (nonatomic) BOOL hasToggleState;
@property (readonly, nonatomic) BOOL hasUnderlyingIntent;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentTitle;
@property (readonly, nonatomic) BOOL hasVerb;
@property (readonly) NSUInteger hash;
@property (nonatomic) int intentCategory; // ivar: _intentCategory
@property (nonatomic) BOOL interstitialDisabled; // ivar: _interstitialDisabled
@property (copy, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (retain, nonatomic) _INPBDictionary *parameters; // ivar: _parameters
@property (nonatomic) BOOL prefersExecutionOnCompanion; // ivar: _prefersExecutionOnCompanion
@property (copy, nonatomic) NSString *responseTemplate; // ivar: _responseTemplate
@property (copy, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) NSUInteger stepsCount;
@property (readonly) Class superclass;
@property (nonatomic) int toggleState; // ivar: _toggleState
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent; // ivar: _underlyingIntent
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse; // ivar: _underlyingIntentResponse
@property (copy, nonatomic) NSString *underlyingIntentTitle; // ivar: _underlyingIntentTitle
@property (copy, nonatomic) NSString *verb; // ivar: _verb


+(BOOL)supportsSecureCoding;
+(Class)stepType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)intentCategoryAsString:(int)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(id)toggleStateAsString:(int)arg0 ;
-(int)StringAsIntentCategory:(id)arg0 ;
-(int)StringAsToggleState:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)clearSteps;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif