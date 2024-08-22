// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTQOS_H
#define CTQOS_H

@class NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTQoS : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *bitRateMax; // ivar: _bitRateMax
@property (retain, nonatomic) NSNumber *bitRateMin; // ivar: _bitRateMin
@property (retain, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly, nonatomic) NSNumber *gbr;
@property (retain, nonatomic) NSNumber *qci; // ivar: _qci


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif