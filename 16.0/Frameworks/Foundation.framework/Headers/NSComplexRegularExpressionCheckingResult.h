// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCOMPLEXREGULAREXPRESSIONCHECKINGRESULT_H
#define NSCOMPLEXREGULAREXPRESSIONCHECKINGRESULT_H

@class NSArray;


#import "NSRegularExpressionCheckingResult.h"
#import "NSRegularExpression.h"

@interface NSComplexRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    NSArray *_rangeArray;
}




-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)numberOfRanges;
-(id)initWithRangeArray:(id)arg0 regularExpression:(id)arg1 ;
-(id)initWithRanges:(struct _NSRange *)arg0 count:(NSUInteger)arg1 regularExpression:(id)arg2 ;
-(id)rangeArray;
-(id)regularExpression;
-(struct _NSRange )range;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif