// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTIPFILTERENDPOINT_H
#define CTIPFILTERENDPOINT_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTIPFilterEndpoint : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *addr; // ivar: _addr
@property (retain, nonatomic) NSNumber *maskLen; // ivar: _maskLen
@property (retain, nonatomic) NSNumber *port; // ivar: _port
@property (retain, nonatomic) NSNumber *portRange; // ivar: _portRange


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif