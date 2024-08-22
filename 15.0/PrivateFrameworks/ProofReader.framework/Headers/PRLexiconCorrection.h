// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRLEXICONCORRECTION_H
#define PRLEXICONCORRECTION_H


#import <Foundation/Foundation.h>


@interface PRLexiconCorrection : NSObject

@property (readonly) NSUInteger errorType; // ivar: _errorType
@property (readonly) CGFloat score; // ivar: _score
@property (readonly) unsigned int tokenID; // ivar: _tokenID


-(id)description;
-(id)initWithTokenID:(unsigned int)arg0 score:(CGFloat)arg1 errorType:(NSUInteger)arg2 ;


@end


#endif