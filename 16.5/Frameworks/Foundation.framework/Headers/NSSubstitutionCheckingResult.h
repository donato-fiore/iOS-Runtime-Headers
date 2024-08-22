// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUBSTITUTIONCHECKINGRESULT_H
#define NSSUBSTITUTIONCHECKINGRESULT_H



#import "NSTextCheckingResult.h"
#import "NSString.h"

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSString *_replacementString;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
-(id)replacementString;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif