// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSDECLARATIONSHADOW_H
#define IKCSSDECLARATIONSHADOW_H

@class NSShadow;


#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationShadow : IKCSSDeclaration

@property (retain, nonatomic) NSShadow *value; // ivar: _value


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif