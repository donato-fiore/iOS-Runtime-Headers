// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONSCOREDTOKEN_H
#define UIDICTATIONSCOREDTOKEN_H

@protocol NSSecureCoding;


#import "UIDictationToken.h"

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidenceScore; // ivar: _confidenceScore


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionExtra;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 removeSpaceBefore:(BOOL)arg1 removeSpaceAfter:(BOOL)arg2 confidenceScore:(CGFloat)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif