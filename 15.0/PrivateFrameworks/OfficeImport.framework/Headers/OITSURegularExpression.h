// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUREGULAREXPRESSION_H
#define OITSUREGULAREXPRESSION_H

@class NSString;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface OITSURegularExpression : NSObject <NSCopying, NSCoding>

 {
    NSString *_expressionString;
    *void _reserved;
}




+(id)regularExpressionWithString:(id)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfSubexpressions;
-(char *)getBytesForString:(id)arg0 lossByte:(unsigned char)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expressionString;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExpressionString:(id)arg0 ;
-(id)initWithExpressionString:(id)arg0 options:(unsigned int)arg1 ;
-(struct _NSRange )matchedRangeForCString:(char *)arg0 range:(struct _NSRange )arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3 ;
-(struct _NSRange )matchedRangeForString:(id)arg0 range:(struct _NSRange )arg1 subexpressionRanges:(struct _NSRange *)arg2 count:(unsigned int)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif