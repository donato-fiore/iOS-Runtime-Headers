// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKCSSMEDIAQUERYEXPRESSION_H
#define IKCSSMEDIAQUERYEXPRESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKCSSMediaQueryExpression : NSObject

@property (retain, nonatomic) NSString *dimension; // ivar: _dimension
@property CGFloat doubleValue; // ivar: _doubleValue
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property NSInteger type; // ivar: _type


-(BOOL)evaluate;
-(id)description;
-(id)expressionAsString;
-(id)valueAsString;


@end


#endif