// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NRENDPOINT_H
#define NRENDPOINT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NRDeviceIdentifier.h"

@interface NREndpoint : NSObject <NSCopying>



@property (nonatomic) unsigned char dataProtectionClass; // ivar: _dataProtectionClass
@property (retain, nonatomic) NRDeviceIdentifier *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSString *portString; // ivar: _portString


-(id)copyEndpoint;
-(id)copyNWEndpoint;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDeviceIdentifier:(id)arg0 portString:(id)arg1 dataProtectionClass:(unsigned char)arg2 ;


@end


#endif