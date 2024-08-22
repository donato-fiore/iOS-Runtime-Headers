// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSDECLARATIONURL_H
#define IKCSSDECLARATIONURL_H

@class NSURL;


#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationURL : IKCSSDeclaration

@property (retain, nonatomic) NSURL *value; // ivar: _value


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif