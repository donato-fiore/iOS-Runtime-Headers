// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSIMPLEREGULAREXPRESSIONCHECKINGRESULT_H
#define NSSIMPLEREGULAREXPRESSIONCHECKINGRESULT_H



#import "NSRegularExpressionCheckingResult.h"
#import "NSRegularExpression.h"

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {
    NSRegularExpression *_regularExpression;
    _NSRange _ranges;
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