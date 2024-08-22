// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSORTHOGRAPHYCHECKINGRESULT_H
#define NSORTHOGRAPHYCHECKINGRESULT_H



#import "NSTextCheckingResult.h"
#import "NSOrthography.h"

@interface NSOrthographyCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSOrthography *_orthography;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 orthography:(id)arg1 ;
-(id)orthography;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif