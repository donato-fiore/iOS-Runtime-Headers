// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLBAG_H
#define ICURLBAG_H

@class NSArray, NSSet, NSDictionary, NSMutableDictionary, NSDate, NSString, NSNumber;
@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "ICURLBagEnhancedAudioConfiguration.h"
#import "ICURLBagLibraryDAAPConfiguration.h"
#import "ICURLBagRadioConfiguration.h"

@interface ICURLBag : NSObject {
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns; // ivar: _GUIDURLRegexPatterns
@property (retain, nonatomic) NSSet *GUIDURLSchemes; // ivar: _GUIDURLSchemes
@property (readonly, copy, nonatomic) NSDictionary *_allValues;
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *allValues;
@property (copy, nonatomic) NSObject<AMSBagProtocol> *amsBag; // ivar: _amsBag
@property (copy, nonatomic) NSDictionary *bagValues; // ivar: _bagValues
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache; // ivar: _convertedActionsCache
@property (readonly, nonatomic) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) NSDictionary *fallbackValues; // ivar: _fallbackValues
@property (readonly, nonatomic) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (readonly, copy, nonatomic) NSString *profileName; // ivar: _profileName
@property (readonly, copy, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, copy, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (readonly, copy, nonatomic) NSString *serverCorrelationKey; // ivar: _serverCorrelationKey
@property (readonly, copy, nonatomic) NSString *serverEnvironment; // ivar: _serverEnvironment
@property (readonly, copy, nonatomic) NSNumber *sourceAccountDSID; // ivar: _sourceAccountDSID
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;


+(id)_allBagKeys;
-(BOOL)_shouldMescalSignBodyForURL:(id)arg0 withSignatureConfiguration:(id)arg1 ;
-(BOOL)boolValueForBagKey:(id)arg0 ;
-(BOOL)hasValueForBagKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTrustedHostForURL:(id)arg0 ;
-(BOOL)shouldAppendDeviceGUIDForURL:(id)arg0 ;
-(BOOL)shouldAppendMachineDataHeadersForURL:(id)arg0 ;
-(NSInteger)int64ValueForBagKey:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 amsBag:(id)arg1 fallbackValues:(id)arg2 requestDate:(id)arg3 expirationDate:(id)arg4 serverCorrelationKey:(id)arg5 serverEnvironment:(id)arg6 profileName:(id)arg7 profileVersion:(id)arg8 sourceAccountDSID:(id)arg9 ;
-(id)_initWithPropertyListRepresentation:(id)arg0 ;
-(id)_knownIncorrectValues;
-(id)_knownMissingBagSubKeyValuesDictionary;
-(id)_knownMissingBagValuesDictionary;
-(id)_knownOptionalBagKeys;
-(id)_logAndReturnFallbackValueForMissingKey:(id)arg0 ;
-(id)_urlStringFromBagStringValue:(id)arg0 ;
-(id)_valueForBagKey:(id)arg0 ;
-(id)arrayForBagKey:(id)arg0 ;
-(id)dictionaryForBagKey:(id)arg0 ;
-(id)mescalConfigurationForRequest:(id)arg0 ;
-(id)mescalConfigurationForRequestURL:(id)arg0 ;
-(id)mescalConfigurationForResponse:(id)arg0 ;
-(id)mescalConfigurationForResponseURL:(id)arg0 ;
-(id)numberForBagKey:(id)arg0 ;
-(id)stringForBagKey:(id)arg0 ;
-(id)urlForBagKey:(id)arg0 ;
-(id)valueForBagKey:(id)arg0 ;
-(id)valuesForBagKeys:(id)arg0 ;
-(void)_validateGUIDURLConfigIfNeeded;
-(void)createAMSSnapshotBagWithCompletion:(id)arg0 ;


@end


#endif