// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSGRAMMARCHECKINGRESULT_H
#define NSGRAMMARCHECKINGRESULT_H

@class NSArray;


#import "NSTextCheckingResult.h"

@interface NSGrammarCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSArray *_details;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)grammarDetails;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 details:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif