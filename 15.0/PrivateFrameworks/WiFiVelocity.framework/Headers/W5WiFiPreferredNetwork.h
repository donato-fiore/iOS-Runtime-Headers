// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5WIFIPREFERREDNETWORK_H
#define W5WIFIPREFERREDNETWORK_H

@class NSString, NSDate, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *domainName; // ivar: _domainName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL isCaptive; // ivar: _isCaptive
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isHidden; // ivar: _isHidden
@property (nonatomic) BOOL isMultiAP; // ivar: _isMultiAP
@property (nonatomic) BOOL isPasspoint; // ivar: _isPasspoint
@property (copy, nonatomic) NSDate *lastJoinedTimestamp; // ivar: _lastJoinedTimestamp
@property (nonatomic) NSInteger security; // ivar: _security
@property (copy, nonatomic) NSData *ssid; // ivar: _ssid
@property (copy, nonatomic) NSString *ssidString; // ivar: _ssidString


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPreferredNetwork:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif