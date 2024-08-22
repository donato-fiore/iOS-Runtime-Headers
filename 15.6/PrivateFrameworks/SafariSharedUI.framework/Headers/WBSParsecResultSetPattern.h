// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECRESULTSETPATTERN_H
#define WBSPARSECRESULTSETPATTERN_H

@class NSRegularExpression;

#import <Foundation/Foundation.h>


@interface WBSParsecResultSetPattern : NSObject {
    NSRegularExpression *_regularExpression;
}




+(id)_nextTokenInResultSetPattern:(id)arg0 ;
+(id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg0 ;
+(id)_regularExpressionPatternForToken:(id)arg0 ;
+(id)_regularExpressionPatternFromResultSetPattern:(id)arg0 ;
+(id)patternWithString:(id)arg0 ;
-(BOOL)isMatchedByString:(id)arg0 ;
-(id)_initWithRegularExpression:(id)arg0 ;


@end


#endif