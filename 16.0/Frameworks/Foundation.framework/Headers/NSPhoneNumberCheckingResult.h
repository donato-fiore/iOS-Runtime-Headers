// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPHONENUMBERCHECKINGRESULT_H
#define NSPHONENUMBERCHECKINGRESULT_H



#import "NSTextCheckingResult.h"
#import "NSString.h"

@interface NSPhoneNumberCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSString *_phoneNumber;
    id *_underlyingResult;
}


@property (readonly) *void underlyingResult;


+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 phoneNumber:(id)arg1 ;
-(id)initWithRange:(struct _NSRange )arg0 phoneNumber:(id)arg1 underlyingResult:(*void)arg2 ;
-(id)phoneNumber;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif