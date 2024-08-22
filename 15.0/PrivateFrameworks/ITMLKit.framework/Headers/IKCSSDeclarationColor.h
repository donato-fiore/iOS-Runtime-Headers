// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCSSDECLARATIONCOLOR_H
#define IKCSSDECLARATIONCOLOR_H



#import "IKCSSDeclaration.h"
#import "IKColor.h"

@interface IKCSSDeclarationColor : IKCSSDeclaration

@property (retain, nonatomic) IKColor *color; // ivar: _color
@property NSInteger sourceType; // ivar: _sourceType


+(id)_stringForColor:(id)arg0 sourceType:(NSInteger)arg1 ;
-(id)_colorFromParseObject:(id)arg0 sourceType:(*NSInteger)arg1 ;
-(id)_keywordKolorFromParseToken:(id)arg0 ;
-(id)_kolorFromParseObject:(id)arg0 sourceType:(*NSInteger)arg1 ;
-(id)_linearGradientKolorFromParseFunction:(id)arg0 ;
-(id)description;
-(id)initWithParseDeclaration:(id)arg0 info:(id)arg1 ;
-(id)stringValue;


@end


#endif