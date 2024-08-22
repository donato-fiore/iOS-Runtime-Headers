// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCOMMANDKEYSCRITERIA_H
#define SPCOMMANDKEYSCRITERIA_H

@class NSDateInterval, NSNumber, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPCommandKeysCriteria : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (copy, nonatomic) NSNumber *hint; // ivar: _hint
@property (copy, nonatomic) NSNumber *index; // ivar: _index
@property (copy, nonatomic) NSArray *indices; // ivar: _indices
@property (copy, nonatomic) NSNumber *sequence; // ivar: _sequence


+(BOOL)supportsSecureCoding;
+(id)driftModeledCriteria;
+(id)matchDateInterval:(id)arg0 ;
+(id)matchPrimaryIndices:(id)arg0 ;
+(id)matchSecondaryIndex:(NSUInteger)arg0 hint:(unsigned char)arg1 ;
+(id)matchSequence:(unsigned char)arg0 index:(unsigned int)arg1 hint:(unsigned char)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 sequence:(id)arg1 indices:(id)arg2 index:(id)arg3 hint:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif