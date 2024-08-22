// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTFAMILIARITYINDEXRESULT_H
#define RTFAMILIARITYINDEXRESULT_H

@class NSDateInterval;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTFamiliarityIndexResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) CGFloat familiarityIndex; // ivar: _familiarityIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 familiarityIndex:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif