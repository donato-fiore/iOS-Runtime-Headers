// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDLTRAFFICREGISTRATIONCONFIGURATION_H
#define AWDLTRAFFICREGISTRATIONCONFIGURATION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"

@interface AWDLTrafficRegistrationConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) WiFiMACAddress *peerAddress; // ivar: _peerAddress
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 peerAddress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif