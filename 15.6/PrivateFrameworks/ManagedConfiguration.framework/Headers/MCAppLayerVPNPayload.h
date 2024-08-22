// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCAPPLAYERVPNPAYLOAD_H
#define MCAPPLAYERVPNPAYLOAD_H

@class NSArray, NSString;


#import "MCVPNPayloadBase.h"

@interface MCAppLayerVPNPayload : MCVPNPayloadBase

@property (retain, nonatomic) NSArray *SMBDomains; // ivar: _SMBDomains
@property (retain, nonatomic) NSArray *SafariDomains; // ivar: _SafariDomains
@property (retain, nonatomic) NSString *VPNUUID; // ivar: _VPNUUID
@property (retain, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (retain, nonatomic) NSArray *calendarDomains; // ivar: _calendarDomains
@property (retain, nonatomic) NSArray *contactsDomains; // ivar: _contactsDomains
@property (retain, nonatomic) NSArray *excludedDomains; // ivar: _excludedDomains
@property (retain, nonatomic) NSArray *mailDomains; // ivar: _mailDomains
@property (readonly, nonatomic) BOOL restrictDomains; // ivar: _restrictDomains


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)filterForUserEnrollmentOutError:(*id)arg0 ;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif