// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKCSSDECLARATIONFOURTUPLE_H
#define IKCSSDECLARATIONFOURTUPLE_H



#import "IKCSSDeclaration.h"
#import "IKFourTuple.h"

@interface IKCSSDeclarationFourTuple : IKCSSDeclaration

@property (retain, nonatomic) IKFourTuple *fourTuple; // ivar: _fourTuple


-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif