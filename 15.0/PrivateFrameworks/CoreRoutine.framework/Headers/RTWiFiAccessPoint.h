// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTWIFIACCESSPOINT_H
#define RTWIFIACCESSPOINT_H

@class NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTWiFiAccessPoint : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat age; // ivar: _age
@property (readonly, nonatomic) NSInteger channel; // ivar: _channel
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSString *mac; // ivar: _mac
@property (readonly, nonatomic) NSInteger rssi; // ivar: _rssi


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMac:(id)arg0 rssi:(NSInteger)arg1 channel:(NSInteger)arg2 age:(CGFloat)arg3 date:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif