// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGURLPARSER_H
#define AMSBAGURLPARSER_H


#import <Foundation/Foundation.h>


@interface AMSBagURLParser : NSObject



+(id)URLBySubstitutingVariablesInURLString:(id)arg0 usingBlock:(id)arg1 ;
+(id)_firstVariableInTemplate:(id)arg0 includeTags:(BOOL)arg1 ;
+(struct _NSRange )_rangeOfTemplateInURLString:(id)arg0 ;
+(struct _NSRange )_rangeofSubstringWithOpeningTag:(id)arg0 closingTag:(id)arg1 inString:(id)arg2 ;


@end


#endif