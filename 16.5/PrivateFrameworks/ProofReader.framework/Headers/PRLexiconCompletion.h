// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRLEXICONCOMPLETION_H
#define PRLEXICONCOMPLETION_H


#import <Foundation/Foundation.h>


@interface PRLexiconCompletion : NSObject

@property (readonly) CGFloat score; // ivar: _score
@property (readonly) unsigned int tokenID; // ivar: _tokenID


-(id)description;
-(id)initWithTokenID:(unsigned int)arg0 score:(CGFloat)arg1 ;


@end


#endif