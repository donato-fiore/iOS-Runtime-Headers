// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSPARSETOKEN_H
#define IKCSSPARSETOKEN_H



#import "IKCSSParseObject.h"
#import "IKCSSToken.h"

@interface IKCSSParseToken : IKCSSParseObject

@property (retain, nonatomic) IKCSSToken *token; // ivar: _token


-(id)description;
-(id)init;


@end


#endif