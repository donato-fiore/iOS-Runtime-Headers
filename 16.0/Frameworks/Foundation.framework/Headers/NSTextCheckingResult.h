// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTCHECKINGRESULT_H
#define NSTEXTCHECKINGRESULT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSTextCheckingResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly) _NSRange range;
@property (readonly) NSUInteger resultType;


+(BOOL)supportsSecureCoding;
+(id)addressCheckingResultWithRange:(struct _NSRange )arg0 components:(id)arg1 ;
+(id)correctionCheckingResultWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
+(id)correctionCheckingResultWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 alternativeStrings:(id)arg2 ;
+(id)dashCheckingResultWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
+(id)dateCheckingResultWithRange:(struct _NSRange )arg0 date:(id)arg1 ;
+(id)dateCheckingResultWithRange:(struct _NSRange )arg0 date:(id)arg1 timeZone:(id)arg2 duration:(CGFloat)arg3 ;
+(id)grammarCheckingResultWithRange:(struct _NSRange )arg0 details:(id)arg1 ;
+(id)linkCheckingResultWithRange:(struct _NSRange )arg0 URL:(id)arg1 ;
+(id)orthographyCheckingResultWithRange:(struct _NSRange )arg0 orthography:(id)arg1 ;
+(id)phoneNumberCheckingResultWithRange:(struct _NSRange )arg0 phoneNumber:(id)arg1 ;
+(id)quoteCheckingResultWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
+(id)regularExpressionCheckingResultWithRanges:(struct _NSRange *)arg0 count:(NSUInteger)arg1 regularExpression:(id)arg2 ;
+(id)replacementCheckingResultWithRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
+(id)spellCheckingResultWithRange:(struct _NSRange )arg0 ;
+(id)transitInformationCheckingResultWithRange:(struct _NSRange )arg0 components:(id)arg1 ;
+(void)initialize;
-(*void)underlyingResult;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(BOOL)timeIsApproximate;
-(BOOL)timeIsPast;
-(BOOL)timeIsSignificant;
-(CGFloat)duration;
-(NSUInteger)numberOfRanges;
-(id)URL;
-(id)addressComponents;
-(id)alternativeStrings;
-(id)components;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date;
-(id)description;
-(id)grammarDetails;
-(id)initWithCoder:(id)arg0 ;
-(id)leadingText;
-(id)orthography;
-(id)phoneNumber;
-(id)referenceDate;
-(id)regularExpression;
-(id)replacementString;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(id)timeZone;
-(id)trailingText;
-(struct _NSRange )decodeRangeWithCoder:(id)arg0 ;
-(struct _NSRange )rangeAtIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeWithName:(id)arg0 ;
-(void)encodeRangeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif