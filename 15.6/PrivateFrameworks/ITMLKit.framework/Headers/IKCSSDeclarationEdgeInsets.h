// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKCSSDECLARATIONEDGEINSETS_H
#define IKCSSDECLARATIONEDGEINSETS_H



#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationEdgeInsets : IKCSSDeclaration

@property NSUInteger edgeFlag; // ivar: _edgeFlag
@property UIEdgeInsets insets; // ivar: _insets
@property BOOL insetsFound; // ivar: _insetsFound


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif