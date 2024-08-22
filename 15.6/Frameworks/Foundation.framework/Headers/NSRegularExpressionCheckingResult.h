// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSREGULAREXPRESSIONCHECKINGRESULT_H
#define NSREGULAREXPRESSIONCHECKINGRESULT_H

@class NSArray;


#import "NSTextCheckingResult.h"
#import "NSRegularExpression.h"

@interface NSRegularExpressionCheckingResult : NSTextCheckingResult

@property (readonly) NSArray *rangeArray;
@property (readonly) NSRegularExpression *regularExpression;


+(BOOL)supportsSecureCoding;
-(NSUInteger)resultType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRangeArray:(id)arg0 regularExpression:(id)arg1 ;
-(id)initWithRanges:(struct _NSRange *)arg0 count:(NSUInteger)arg1 regularExpression:(id)arg2 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )rangeWithName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif