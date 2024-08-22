// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCORRECTIONCHECKINGRESULT_H
#define NSCORRECTIONCHECKINGRESULT_H

@class NSArray;


#import "NSSubstitutionCheckingResult.h"

@interface NSCorrectionCheckingResult : NSSubstitutionCheckingResult {
    NSArray *_alternativeStrings;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)resultType;
-(id)alternativeStrings;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 alternativeStrings:(id)arg2 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif