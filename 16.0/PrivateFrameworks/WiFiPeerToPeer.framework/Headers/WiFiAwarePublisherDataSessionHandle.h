// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIAWAREPUBLISHERDATASESSIONHANDLE_H
#define WIFIAWAREPUBLISHERDATASESSIONHANDLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WiFiMACAddress.h"

@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned char datapathID; // ivar: _datapathID
@property (readonly, nonatomic) WiFiMACAddress *initiatorDataAddress; // ivar: _initiatorDataAddress


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDatapathID:(unsigned char)arg0 initiatorDataAddress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif