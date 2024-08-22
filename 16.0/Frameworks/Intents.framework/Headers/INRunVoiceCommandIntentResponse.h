// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRUNVOICECOMMANDINTENTRESPONSE_H
#define INRUNVOICECOMMANDINTENTRESPONSE_H

@class NSString, NSNumber, NSDictionary, NSArray;
@protocol INRunVoiceCommandIntentResponseExport;


#import "INIntentResponse.h"
#import "INArchivedObject.h"

@interface INRunVoiceCommandIntentResponse : INIntentResponse <INRunVoiceCommandIntentResponseExport>



@property (copy, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) NSInteger code;
@property (copy, nonatomic) NSNumber *continueRunning;
@property (copy, nonatomic) NSNumber *customResponsesDisabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger intentCategory;
@property (copy, nonatomic) NSNumber *interstitialDisabled;
@property (copy, nonatomic) NSString *localizedAppName;
@property (copy, nonatomic) NSDictionary *parameters;
@property (copy, nonatomic) NSNumber *prefersExecutionOnCompanion;
@property (copy, nonatomic) NSString *responseTemplate;
@property (copy, nonatomic) NSArray *steps;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger toggleState;
@property (copy, nonatomic) INArchivedObject *underlyingIntent;
@property (copy, nonatomic) INArchivedObject *underlyingIntentResponse;
@property (copy, nonatomic) NSString *underlyingIntentTitle;
@property (copy, nonatomic) NSString *verb;


+(BOOL)_appLaunchRequestedFromCode:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_codeFromType:(int)arg0 errorCode:(int)arg1 appLaunchRequested:(BOOL)arg2 ;
+(int)_errorCodeFromCode:(NSInteger)arg0 ;
+(int)_typeFromCode:(NSInteger)arg0 ;
-(NSInteger)_codeWithName:(id)arg0 ;
-(NSInteger)_intentResponseCode;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)init;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesByName;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPropertiesByName:(id)arg0 ;


@end


#endif