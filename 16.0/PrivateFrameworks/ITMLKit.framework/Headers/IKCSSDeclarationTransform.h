// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKCSSDECLARATIONTRANSFORM_H
#define IKCSSDECLARATIONTRANSFORM_H



#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationTransform : IKCSSDeclaration

@property CGAffineTransform transform; // ivar: _transform


-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif