// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSENSORDESCRIPTION_H
#define SRSENSORDESCRIPTION_H

@class NSString, NSSet, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface SRSensorDescription : NSObject {
    NSString *_additionalSampleDataNoteKey;
    NSString *_localizedAdditionalSampleDataNote;
    unsigned int _legacySampleClassLinkedBefore;
    NSString *_sampleClass;
    NSString *_exportingSampleClass;
    NSString *_legacySampleClass;
    NSSet *_additions;
    NSDictionary *_supportedPlatforms;
}


@property (readonly, copy) NSString *authorizationService; // ivar: _authorizationService
@property (readonly, copy) NSString *authorizationStoreCohort; // ivar: _authorizationStoreCohort
@property (readonly) NSInteger authorizationVersion; // ivar: _authorizationVersion
@property (readonly, copy) NSString *exportingSampleClass;
@property (readonly, copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, copy) NSString *infoPlistAuthorizationCategory; // ivar: _infoPlistAuthorizationCategory
@property (readonly, copy) NSString *legacyName; // ivar: _legacyName
@property (readonly, copy) NSString *localizedAdditionalSampleDataNote;
@property (readonly) BOOL metadataEnabled;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, copy) NSString *onDemandWriterService; // ivar: _onDemandWriterService
@property (readonly, copy) NSString *publicEntitlementValue; // ivar: _publicEntitlementValue
@property (readonly, copy) NSArray *relatedSettingsCategories; // ivar: _relatedSettingsCategories
@property (readonly, nonatomic) CGFloat roundingInterval; // ivar: _roundingInterval
@property (readonly, copy) NSString *sampleClass;
@property (readonly) BOOL sensorConfigurationEnabled;
@property (readonly) BOOL supportsCurrentPlatform;
@property (readonly, copy) NSString *writerAuthorizationService; // ivar: _writerAuthorizationService
@property (readonly, copy) NSString *writerBundleIdentifier; // ivar: _writerBundleIdentifier


+(id)sensorDescriptionForDeletionRecordFromDescription:(id)arg0 ;
+(id)sensorDescriptionForSensor:(id)arg0 ;
+(id)sensorDescriptionsForAuthorizationService:(id)arg0 ;
+(void)initialize;
-(BOOL)supportsPlatform:(id)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif