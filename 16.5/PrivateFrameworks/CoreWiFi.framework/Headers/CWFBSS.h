// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFBSS_H
#define CWFBSS_H

@class NSDate, NSString, NSData, NSDictionary, CLLocation;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CWFChannel.h"

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDate *AWDLRealTimeModeTimestamp; // ivar: _AWDLRealTimeModeTimestamp
@property (copy, nonatomic) NSString *BSSID; // ivar: _BSSID
@property (copy, nonatomic) NSData *DHCPServerID; // ivar: _DHCPServerID
@property (copy, nonatomic) NSData *DHCPv6ServerID; // ivar: _DHCPv6ServerID
@property (copy, nonatomic) NSString *IPv4NetworkSignature; // ivar: _IPv4NetworkSignature
@property (copy, nonatomic) NSString *IPv6NetworkSignature; // ivar: _IPv6NetworkSignature
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes; // ivar: _OSSpecificAttributes
@property (copy, nonatomic) CWFChannel *channel; // ivar: _channel
@property (copy, nonatomic) CWFChannel *colocated2GHzRNRChannel; // ivar: _colocated2GHzRNRChannel
@property (copy, nonatomic) CWFChannel *colocated5GHzRNRChannel; // ivar: _colocated5GHzRNRChannel
@property (copy, nonatomic) NSDate *lastAssociatedAt; // ivar: _lastAssociatedAt
@property (copy, nonatomic) CLLocation *location; // ivar: _location


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBSS:(id)arg0 ;
-(NSUInteger)hash;
-(id)__coreWiFiSpecificKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)coreWiFiSpecificAttributes;
-(id)description;
-(id)externalForm;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalForm:(id)arg0 ;
-(void)__updateWithExternalForm:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCoreWiFiSpecificAttributes:(id)arg0 ;


@end


#endif