// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSWIFINETWORKASSOCIATION_H
#define MTSWIFINETWORKASSOCIATION_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTSWiFiNetworkAssociation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy) NSData *credentials; // ivar: _credentials
@property (readonly, copy) NSData *ssid; // ivar: _ssid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSSID:(id)arg0 credentials:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif