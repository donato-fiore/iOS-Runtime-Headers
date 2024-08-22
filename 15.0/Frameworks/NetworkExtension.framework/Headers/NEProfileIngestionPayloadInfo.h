// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPROFILEINGESTIONPAYLOADINFO_H
#define NEPROFILEINGESTIONPAYLOADINFO_H

@class NSString, NSDate;
@protocol NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property BOOL isSetAside; // ivar: _isSetAside
@property (copy) NSString *payloadOrganization; // ivar: _payloadOrganization
@property (copy) NSString *payloadProtocolType; // ivar: _payloadProtocolType
@property (copy) NSString *payloadUUID; // ivar: _payloadUUID
@property (copy) NSString *profileIdentifier; // ivar: _profileIdentifier
@property (copy) NSDate *profileIngestionDate; // ivar: _profileIngestionDate
@property (copy) NSString *profileOrganization; // ivar: _profileOrganization
@property NSInteger profileSource; // ivar: _profileSource
@property (copy) NSString *profileUUID; // ivar: _profileUUID
@property (copy) NSString *systemVersion; // ivar: _systemVersion


+(BOOL)supportsSecureCoding;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif