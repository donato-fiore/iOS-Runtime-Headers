// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCSIGNPOSTSPAN_H
#define ASCSIGNPOSTSPAN_H

@class NSDateInterval, NSDate, NSMutableSet, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCSignpostSpan : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *dateRange;
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSMutableSet *mutableSupplementaryTags; // ivar: _mutableSupplementaryTags
@property (readonly, nonatomic) NSUInteger primaryTag; // ivar: _primaryTag
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, copy, nonatomic) NSSet *supplementaryTags;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addSupplementaryTag:(NSUInteger)arg0 ;
-(void)beginEmitting;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endEmitting;


@end


#endif