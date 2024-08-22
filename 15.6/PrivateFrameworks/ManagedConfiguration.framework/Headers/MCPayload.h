// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPAYLOAD_H
#define MCPAYLOAD_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "MCProfile.h"

@interface MCPayload : NSObject

@property (readonly, retain, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, nonatomic) BOOL containsSensitiveUserInformation;
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, retain, nonatomic) NSString *friendlyName;
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) NSArray *installationWarnings;
@property (nonatomic) BOOL mustInstallNonInteractively; // ivar: _mustInstallNonInteractively
@property (readonly, retain, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, retain, nonatomic) NSString *payloadDescription; // ivar: _payloadDescription
@property (retain, nonatomic) NSString *persistentResourceID; // ivar: _persistentResourceID
@property (readonly, weak, nonatomic) MCProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSDictionary *restrictions;
@property (readonly, retain, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)_minimumWatchVersionRequirementsForPayloads;
+(id)_sharedHomePodPayloadClasses;
+(id)_sharedWatchPayloadClasses;
+(id)accountPayloads;
+(id)availablePayloadsForUserEnrollment;
+(id)badFieldTypeErrorWithField:(id)arg0 ;
+(id)badFieldValueErrorWithField:(id)arg0 ;
+(id)badFieldValueErrorWithField:(id)arg0 underlyingError:(id)arg1 ;
+(id)cellularRequiredPayloads;
+(id)conflictingFieldValueErrorWithUnderlyingError:(id)arg0 ;
+(id)hrnRequiredPayloads;
+(id)installableHomePodConfigurationPayloadClasses;
+(id)installableWatchConfigurationPayloadClasses;
+(id)localizedDescriptionForPayloadCount:(NSUInteger)arg0 ;
+(id)localizedParenthesizedFormDescriptionForPayloadCount:(NSUInteger)arg0 ;
+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)mdmAdoptablePayloads;
+(id)missingFieldErrorWithField:(id)arg0 underlyingError:(id)arg1 ;
+(id)payloadFromDictionary:(id)arg0 isStub:(BOOL)arg1 profile:(id)arg2 outError:(*id)arg3 ;
+(id)payloadsFromArray:(id)arg0 isStub:(BOOL)arg1 profile:(id)arg2 outError:(*id)arg3 ;
+(id)remoteQueueableHomePodPayloadClasses;
+(id)remoteQueueableWatchPayloadClasses;
+(id)supervisedRequiredPayloads;
+(id)unavailablePayloadsInEphemeralMultiUser;
+(id)unavailableSystemPayloadsInEphemeralMultiUser;
+(id)unavailableUserPayloadsInEphemeralMultiUser;
+(id)wrapperPayloadDictionary;
-(BOOL)isSupportedByWatchVersions:(id)arg0 ;
-(id)description;
-(id)filterForUserEnrollmentOutError:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)malformedPayloadErrorWithError:(id)arg0 ;
-(id)serializedDictionary;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)subtitle1Label;
-(id)subtitle2Description;
-(id)subtitle2Label;
-(id)title;
-(id)verboseDescription;


@end


#endif