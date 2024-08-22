// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef W5STATUS_H
#define W5STATUS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "W5AWDLStatus.h"
#import "W5BluetoothStatus.h"
#import "W5NetworkStatus.h"
#import "W5PowerStatus.h"
#import "W5WiFiStatus.h"

@interface W5Status : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) W5AWDLStatus *awdl; // ivar: _awdl
@property (copy, nonatomic) W5BluetoothStatus *bluetooth; // ivar: _bluetooth
@property (copy, nonatomic) W5NetworkStatus *network; // ivar: _network
@property (copy, nonatomic) W5PowerStatus *power; // ivar: _power
@property (copy, nonatomic) W5WiFiStatus *wifi; // ivar: _wifi


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToStatus:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif