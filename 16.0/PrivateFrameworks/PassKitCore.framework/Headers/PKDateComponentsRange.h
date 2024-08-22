// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATECOMPONENTSRANGE_H
#define PKDATECOMPONENTSRANGE_H

@class NSDateComponents;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKDateComponentsRange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateComponents *endDateComponents; // ivar: _endDateComponents
@property (readonly, copy, nonatomic) NSDateComponents *startDateComponents; // ivar: _startDateComponents


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDateComponentsRange:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateInterval;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDateComponents:(id)arg0 endDateComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif