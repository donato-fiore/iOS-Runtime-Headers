// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSDECLARATIONPOINT_H
#define IKCSSDECLARATIONPOINT_H



#import "IKCSSDeclaration.h"

@interface IKCSSDeclarationPoint : IKCSSDeclaration

@property (nonatomic) NSUInteger unit; // ivar: _unit
@property (nonatomic) CGFloat value; // ivar: _value


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)number;
-(id)stringValue;


@end


#endif