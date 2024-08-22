// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSCHWIFIAWAREALTERNATIVECARRIER_H
#define STSCHWIFIAWAREALTERNATIVECARRIER_H

@class NSData;


#import "STSCHAlternativeCarrier.h"
#import "STSCHWiFiAwareDiscoveryChannelInfo.h"
#import "STSCHWiFiAwareSecurityInfo.h"

@interface STSCHWiFiAwareAlternativeCarrier : STSCHAlternativeCarrier

@property (retain, nonatomic) STSCHWiFiAwareDiscoveryChannelInfo *discoveryChannelInfo; // ivar: _discoveryChannelInfo
@property (retain, nonatomic) STSCHWiFiAwareSecurityInfo *securityInfo; // ivar: _securityInfo
@property (retain, nonatomic) NSData *serviceIdentifier; // ivar: _serviceIdentifier


+(BOOL)supportsSecureCoding;
+(id)connectionHandoverAlternativeCarrierWithBundle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_createCarrierConfigurationRecord;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNdefRecordBundle:(id)arg0 ;
-(id)initWithSecurityInfo:(id)arg0 discoveryChannelInfo:(id)arg1 powerState:(NSUInteger)arg2 auxiliaryRecords:(id)arg3 ;
-(void)_initWithCarrierConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif