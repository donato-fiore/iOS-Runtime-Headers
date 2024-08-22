// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRBTRSSI_H
#define PRBTRSSI_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRBTRSSI : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int channel; // ivar: _channel
@property (readonly, nonatomic) int rssi_dbm; // ivar: _rssi_dbm
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeStamp:(CGFloat)arg0 rssi_dbm:(int)arg1 channel:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif