// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTIMEINTERVALTRANSPORT_H
#define SASTIMEINTERVALTRANSPORT_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SASTimeIntervalTransport : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *transport; // ivar: _transport


+(BOOL)supportsSecureCoding;
-(CGFloat)timeInterval;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif