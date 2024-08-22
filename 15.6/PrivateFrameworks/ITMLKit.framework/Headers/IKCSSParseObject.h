// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKCSSPARSEOBJECT_H
#define IKCSSPARSEOBJECT_H


#import <Foundation/Foundation.h>

#import "IKArray.h"

@interface IKCSSParseObject : NSObject

@property (retain, nonatomic) IKArray *cssValue; // ivar: _cssValue
@property (nonatomic) _NSRange range; // ivar: _range
@property (nonatomic) NSInteger type; // ivar: _type


+(id)stringifyList:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif