// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSMODECONFIGURATIONRECORD_H
#define DNDSMODECONFIGURATIONRECORD_H

@class NSDate, NSString;
@protocol NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord;

#import <Foundation/Foundation.h>

#import "DNDSConfigurationRecord.h"
#import "DNDSModeRecord.h"
#import "DNDSConfigurationSecureRecord.h"
#import "DNDSModeConfigurationTriggersRecord.h"

@interface DNDSModeConfigurationRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord>



@property (readonly, nonatomic, getter=isAutomaticallyGenerated) BOOL automaticallyGenerated; // ivar: _automaticallyGenerated
@property (readonly, nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, copy, nonatomic) DNDSConfigurationRecord *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSDate *created; // ivar: _created
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger dimsLockScreen; // ivar: _dimsLockScreen
@property (readonly, nonatomic) NSInteger ephemeralResolvedCompatibilityVersion; // ivar: _ephemeralResolvedCompatibilityVersion
@property (readonly, nonatomic) BOOL hasSecureData; // ivar: _hasSecureData
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger impactsAvailability; // ivar: _impactsAvailability
@property (readonly, copy, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (readonly, copy, nonatomic) DNDSModeRecord *mode; // ivar: _mode
@property (readonly, copy, nonatomic) DNDSConfigurationSecureRecord *secureConfiguration; // ivar: _secureConfiguration
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) DNDSModeConfigurationTriggersRecord *triggers; // ivar: _triggers


+(id)dictionaryRepresentationWithCKRecord:(id)arg0 partitionType:(NSUInteger)arg1 ;
+(id)newWithCKRecord:(id)arg0 ;
+(id)newWithDNDSIDSRecord:(id)arg0 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
+(id)newWithDictionaryRepresentation:(id)arg0 partitionedDictionaryRepresentation:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)populateDNDSIDSRecord:(id)arg0 ;
-(NSInteger)populateCKRecord:(id)arg0 lastChanceRecord:(id)arg1 ;
-(id)_initWithMode:(id)arg0 configuration:(id)arg1 secureConfiguration:(id)arg2 triggers:(id)arg3 impactsAvailability:(NSUInteger)arg4 dimsLockScreen:(NSUInteger)arg5 created:(id)arg6 lastModified:(id)arg7 automaticallyGenerated:(BOOL)arg8 compatibilityVersion:(NSInteger)arg9 ephemeralResolvedCompatibilityVersion:(NSInteger)arg10 hasSecureData:(BOOL)arg11 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)shortDescription;
-(void)log:(id)arg0 withMessage:(id)arg1 ;


@end


#endif