// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSPARSEDECLARATION_H
#define IKCSSPARSEDECLARATION_H

@class NSString;


#import "IKCSSParseObject.h"

@interface IKCSSParseDeclaration : IKCSSParseObject

@property (nonatomic) BOOL important; // ivar: _important
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) _NSRange nameRange; // ivar: _nameRange
@property (nonatomic) _NSRange valueRange; // ivar: _valueRange


-(id)description;
-(id)init;


@end


#endif