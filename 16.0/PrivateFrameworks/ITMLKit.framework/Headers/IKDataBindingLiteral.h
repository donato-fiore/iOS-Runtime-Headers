// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDATABINDINGLITERAL_H
#define IKDATABINDINGLITERAL_H

@class NSString;


#import "IKDataBindingValue.h"

@interface IKDataBindingLiteral : IKDataBindingValue

@property (readonly, nonatomic) NSString *literal; // ivar: _literal


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithLiteral:(id)arg0 ;


@end


#endif