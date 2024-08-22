// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLLEXICONCOMPLETION_H
#define NLLEXICONCOMPLETION_H


#import <Foundation/Foundation.h>


@interface NLLexiconCompletion : NSObject {
    unsigned int _tokenID;
    CGFloat _score;
}




-(CGFloat)score;
-(id)description;
-(id)initWithTokenID:(unsigned int)arg0 score:(CGFloat)arg1 ;
-(unsigned int)tokenID;


@end


#endif