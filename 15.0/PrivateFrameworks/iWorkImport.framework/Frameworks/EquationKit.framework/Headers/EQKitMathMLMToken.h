// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EQKITMATHMLMTOKEN_H
#define EQKITMATHMLMTOKEN_H

@class NSString;
@protocol EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken;


#import "EQKitMathMLNode.h"

@interface EQKitMathMLMToken : EQKitMathMLNode <EQKitMathMLNode, EQKitFontStyling, EQKitLayoutSchemataToken>

 {
    ? mFlags;
    NSString""mContent"@"EQKitMathMLTokenContent" mContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isNumber;
-(id)fontStyling;
-(id)init;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithContent:(id)arg0 ;
-(id)initWithString:(id)arg0 environment:(id)arg1 ;
-(id)schemataFontStyling;
-(id)schemataTokenString;
-(int)scriptContext;
-(int)scriptVariant;
-(unsigned int)schemataUnicharOrNul;
-(void)dealloc;


@end


#endif