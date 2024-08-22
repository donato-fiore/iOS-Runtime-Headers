// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEDNSOVERHTTPSSETTINGS_H
#define NEDNSOVERHTTPSSETTINGS_H

@class NSData, NSURL;


#import "NEDNSSettings.h"

@interface NEDNSOverHTTPSSettings : NEDNSSettings

@property (copy) NSData *identityReference; // ivar: _identityReference
@property (copy) NSURL *serverURL; // ivar: _serverURL


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)dnsProtocol;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif