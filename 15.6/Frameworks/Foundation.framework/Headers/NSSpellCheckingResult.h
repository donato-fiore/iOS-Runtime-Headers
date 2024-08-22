// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSPELLCHECKINGRESULT_H
#define NSSPELLCHECKINGRESULT_H



#import "NSTextCheckingResult.h"

@interface NSSpellCheckingResult : NSTextCheckingResult {
    _NSRange _range;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif