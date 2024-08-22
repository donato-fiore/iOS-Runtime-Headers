// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTDEDICATEDBEARERDESCR_H
#define CTDEDICATEDBEARERDESCR_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTDedicatedBearerDescr : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) NSUInteger ip_protocol; // ivar: _ip_protocol
@property (retain, nonatomic) NSString *remote_ip; // ivar: _remote_ip
@property (retain, nonatomic) NSArray *remote_ports; // ivar: _remote_ports
@property (retain, nonatomic) NSString *src_ip; // ivar: _src_ip
@property (retain, nonatomic) NSArray *src_ports; // ivar: _src_ports
@property (retain, nonatomic) NSString *traffic_class; // ivar: _traffic_class


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif