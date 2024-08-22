// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EQKITMATHMLMTEXT_H
#define EQKITMATHMLMTEXT_H

@class NSString;
@protocol EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling;


#import "EQKitMathMLNode.h"
#import "EQKitMathMLTokenContent.h"

@interface EQKitMathMLMText : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataText, EQKitFontStyling>

 {
    EQKitMathMLTokenContent *mContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)mathMLAttributes;
-(BOOL)isBaseFontNameUsed;
-(BOOL)schemataIsQuoted;
-(id)initFromXMLNode:(struct _xmlNode *)arg0 parser:(id)arg1 ;
-(id)initWithContent:(id)arg0 ;
-(id)schemataChildren;
-(int)scriptContext;
-(int)scriptVariant;
-(struct Schemata )layoutSchemata;
-(void)dealloc;


@end


#endif