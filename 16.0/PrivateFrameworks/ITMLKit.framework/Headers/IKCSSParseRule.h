// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSPARSERULE_H
#define IKCSSPARSERULE_H



#import "IKCSSParseObject.h"
#import "IKCSSParseBlock.h"
#import "IKArray.h"

@interface IKCSSParseRule : IKCSSParseObject

@property (nonatomic, setter=_setEndRange:) _NSRange _endRange; // ivar: __endRange
@property (retain, nonatomic) IKCSSParseBlock *block; // ivar: _block
@property (retain, nonatomic) IKArray *prelude; // ivar: _prelude


-(id)description;
-(id)init;
-(struct _NSRange )range;


@end


#endif