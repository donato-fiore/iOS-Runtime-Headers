// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDEVALUATOR_H
#define WBSPASSWORDEVALUATOR_H


#import <Foundation/Foundation.h>

#import "WBSPasswordWordListCollection.h"
#import "WBSPasswordPatternMatcher.h"

@interface WBSPasswordEvaluator : NSObject {
    WBSPasswordWordListCollection *_passwordWordListCollection;
    WBSPasswordWordListCollection *_passcodeWordListCollection;
    WBSPasswordPatternMatcher *_patternMatcher;
}




+(BOOL)passwordLooksLikeDigitOnlyPasscode:(id)arg0 ;
+(id)standardPasswordEvaluator;
-(id)_initWithPasswordWordListCollection:(id)arg0 passcodeWordListCollection:(id)arg1 ;
-(id)evaluatePassword:(id)arg0 ;


@end


#endif