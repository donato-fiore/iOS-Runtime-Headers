// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTLOCATIONOFINTERESTENUMERATIONOPTIONS_H
#define RTLOCATIONOFINTERESTENUMERATIONOPTIONS_H

@class NSDateInterval;
@protocol NSCopying, NSSecureCoding;


#import "RTEnumerationOptions.h"

@interface RTLocationOfInterestEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) BOOL wrappedVisit; // ivar: _wrappedVisit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)enumeratedType;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAscending:(BOOL)arg0 batchSize:(NSUInteger)arg1 dateInterval:(id)arg2 wrappedVisit:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processingBlock:(SEL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif