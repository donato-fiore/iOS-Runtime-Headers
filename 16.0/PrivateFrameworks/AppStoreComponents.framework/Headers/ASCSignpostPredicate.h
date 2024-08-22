// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCSIGNPOSTPREDICATE_H
#define ASCSIGNPOSTPREDICATE_H

@class NSArray, NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCSignpostPredicate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *dateRanges; // ivar: _dateRanges
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSSet *tags; // ivar: _tags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpans:(id)arg0 ;
-(id)initWithTags:(id)arg0 dateRanges:(id)arg1 ;
-(id)predicateByAddingDateRange:(id)arg0 ;
-(id)predicateByAddingTag:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif