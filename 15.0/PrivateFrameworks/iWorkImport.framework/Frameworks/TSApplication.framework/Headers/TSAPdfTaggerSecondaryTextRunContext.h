// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPDFTAGGERSECONDARYTEXTRUNCONTEXT_H
#define TSAPDFTAGGERSECONDARYTEXTRUNCONTEXT_H



#import "TSAPdfTaggerContext.h"

@interface TSAPdfTaggerSecondaryTextRunContext : TSAPdfTaggerContext

@property (readonly, nonatomic) _NSRange baseTextRange; // ivar: _baseTextRange
@property (readonly, nonatomic) _NSRange charRange; // ivar: _charRange


-(id)initWithStateOfTagger:(id)arg0 charRange:(struct _NSRange )arg1 baseTextRange:(struct _NSRange )arg2 ;


@end


#endif