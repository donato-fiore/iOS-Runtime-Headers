// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFHARDWARESECUREELEMENTINFO_H
#define NFHARDWARESECUREELEMENTINFO_H

@class NSString, NSArray, NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger OSMode; // ivar: _OSMode
@property (readonly, nonatomic) NSUInteger OSVersion; // ivar: _OSVersion
@property (readonly, nonatomic) NSUInteger appletMap; // ivar: _appletMap
@property (readonly, retain, nonatomic) NSString *atrString; // ivar: _atrString
@property (readonly, retain, nonatomic) NSArray *bootHistory; // ivar: _bootHistory
@property (readonly, retain, nonatomic) NSNumber *compiledFWVersion; // ivar: _compiledFWVersion
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (readonly, retain, nonatomic) NSString *ecdsaCertificate; // ivar: _ecdsaCertificate
@property (readonly, retain, nonatomic) NSString *eckaCertificate; // ivar: _eckaCertificate
@property (readonly, retain, nonatomic) NSString *firmwareKeyID; // ivar: _firmwareKeyID
@property (readonly, nonatomic) NSUInteger firmwareVersion; // ivar: _firmwareVersion
@property (readonly, nonatomic) NSUInteger fullOSVersion; // ivar: _fullOSVersion
@property (readonly, nonatomic) NSUInteger hardwareVersion; // ivar: _hardwareVersion
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL jcopTooOld; // ivar: _jcopTooOld
@property (readonly, retain, nonatomic) NSData *manifestQuery; // ivar: _manifestQuery
@property (readonly, nonatomic) NSUInteger migrationContext; // ivar: _migrationContext
@property (readonly, retain, nonatomic) NSNumber *migrationInstances; // ivar: _migrationInstances
@property (readonly, retain, nonatomic) NSNumber *migrationPackages; // ivar: _migrationPackages
@property (readonly, nonatomic) NSUInteger migrationState; // ivar: _migrationState
@property (readonly, retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (readonly, retain, nonatomic) NSString *osKeyID; // ivar: _osKeyID
@property (readonly, nonatomic) BOOL osUpdateMode; // ivar: _osUpdateMode
@property (readonly, nonatomic) NSUInteger osid; // ivar: _osid
@property (readonly, retain, nonatomic) NSNumber *otherOSValid; // ivar: _otherOSValid
@property (readonly, retain, nonatomic) NSNumber *persistentConfigID; // ivar: _persistentConfigID
@property (readonly, nonatomic) BOOL personalisable; // ivar: _personalisable
@property (readonly, retain, nonatomic) NSString *platformIdentifier; // ivar: _platformIdentifier
@property (readonly, retain, nonatomic) NSNumber *referenceCounter; // ivar: _referenceCounter
@property (readonly, nonatomic) BOOL restrictedMode; // ivar: _restrictedMode
@property (readonly, nonatomic) BOOL restrictedPerformanceMode; // ivar: _restrictedPerformanceMode
@property (readonly, retain, nonatomic) NSString *rootKeyID; // ivar: _rootKeyID
@property (readonly, retain, nonatomic) NSString *rsaCertificate; // ivar: _rsaCertificate
@property (readonly, nonatomic) NSUInteger seType; // ivar: _seType
@property (readonly, retain, nonatomic) NSNumber *sequenceCounter; // ivar: _sequenceCounter
@property (readonly, retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) NSUInteger signingKeyType; // ivar: _signingKeyType
@property (readonly, nonatomic) NSUInteger supportedTechnologies; // ivar: _supportedTechnologies
@property (readonly, retain, nonatomic) NSString *systemOSSerialNumber; // ivar: _systemOSSerialNumber


+(BOOL)supportsSecureCoding;
-(id)asDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_setIsInRestrictedMode:(BOOL)arg0 ;
-(void)_setIsInRestrictedPerformanceMode:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif