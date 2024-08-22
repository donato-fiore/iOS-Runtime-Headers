// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSDECLARATIONSTRING_H
#define IKCSSDECLARATIONSTRING_H

@class NSString;


#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationString : IKCSSDeclaration

@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif