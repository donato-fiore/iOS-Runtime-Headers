// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICURLBAG_H
#define ICURLBAG_H

@class NSArray, NSSet, NSDictionary, NSMutableDictionary, NSDate, NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICURLBagEnhancedAudioConfiguration.h"
#import "ICURLBagLibraryDAAPConfiguration.h"
#import "ICURLBagRadioConfiguration.h"

@interface ICURLBag : NSObject

@property (retain, nonatomic) NSArray *GUIDURLRegexPatterns; // ivar: _GUIDURLRegexPatterns
@property (retain, nonatomic) NSSet *GUIDURLSchemes; // ivar: _GUIDURLSchemes
@property (readonly, nonatomic) NSDictionary *_propertyListRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *allValues;
@property (copy, nonatomic) NSDictionary *bagValues; // ivar: _bagValues
@property (readonly, nonatomic) BOOL canPostKeybagSyncData;
@property (retain, nonatomic) NSMutableDictionary *convertedActionsCache; // ivar: _convertedActionsCache
@property (readonly, nonatomic) ICURLBagEnhancedAudioConfiguration *enhancedAudioConfiguration;
@property (copy, nonatomic, setter=_setExpirationDate:) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (copy, nonatomic) NSDictionary *fallbackValues; // ivar: _fallbackValues
@property (readonly, nonatomic) ICURLBagLibraryDAAPConfiguration *libraryDAAPConfiguration;
@property (readonly, copy, nonatomic) NSString *profileName; // ivar: _profileName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) ICURLBagRadioConfiguration *radioConfiguration;
@property (readonly, copy, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (readonly, copy, nonatomic) NSString *serverCorrelationKey; // ivar: _serverCorrelationKey
@property (readonly, copy, nonatomic) NSString *serverEnvironment; // ivar: _serverEnvironment
@property (readonly, copy, nonatomic) NSNumber *sourceAccountDSID; // ivar: _sourceAccountDSID
@property (readonly, copy, nonatomic) NSString *storefrontHeaderSuffix;


-(BOOL)_shouldMescalSignBodyForURL:(id)arg0 withSignatureConfiguration:(id)arg1 ;
-(BOOL)boolValueForBagKey:(id)arg0 ;
-(BOOL)hasValueForBagKey:(id)arg0 ;
-(BOOL)isTrustedHostForURL:(id)arg0 ;
-(BOOL)shouldAppendDeviceGUIDForURL:(id)arg0 ;
-(BOOL)shouldAppendMachineDataHeadersForURL:(id)arg0 ;
-(NSInteger)int64ValueForBagKey:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 ;
-(id)_initWithDictionary:(id)arg0 fallbackValues:(id)arg1 requestDate:(id)arg2 expirationDate:(id)arg3 serverCorrelationKey:(id)arg4 serverEnvironment:(id)arg5 profileName:(id)arg6 sourceAccountDSID:(id)arg7 ;
-(id)_initWithDictionary:(id)arg0 requestDate:(id)arg1 expirationDate:(id)arg2 serverCorrelationKey:(id)arg3 serverEnvironment:(id)arg4 profileName:(id)arg5 sourceAccountDSID:(id)arg6 ;
-(id)_initWithPropertyListRepresentation:(id)arg0 ;
-(id)_urlStringFromBagStringValue:(id)arg0 ;
-(id)arrayForBagKey:(id)arg0 ;
-(id)dictionaryForBagKey:(id)arg0 ;
-(id)mescalConfigurationForRequest:(id)arg0 ;
-(id)mescalConfigurationForRequestURL:(id)arg0 ;
-(id)mescalConfigurationForResponse:(id)arg0 ;
-(id)mescalConfigurationForResponseURL:(id)arg0 ;
-(id)stringForBagKey:(id)arg0 ;
-(id)urlForBagKey:(id)arg0 ;
-(id)valueForBagKey:(id)arg0 ;
-(void)_validateGUIDURLConfigIfNeeded;


@end


#endif