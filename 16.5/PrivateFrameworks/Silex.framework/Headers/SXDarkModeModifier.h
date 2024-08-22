// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDARKMODEMODIFIER_H
#define SXDARKMODEMODIFIER_H

@class NSString;
@protocol SXDOMModifying, SXDarkModeConfiguration, SXNamespacedObjectFactory, SXDarkModePolicyHandler;

#import <Foundation/Foundation.h>


@interface SXDarkModeModifier : NSObject <SXDOMModifying>



@property (readonly, nonatomic) NSObject<SXDarkModeConfiguration> *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXNamespacedObjectFactory> *namespacedObjectFactory; // ivar: _namespacedObjectFactory
@property (readonly, nonatomic) NSObject<SXDarkModePolicyHandler> *policyHandler; // ivar: _policyHandler
@property (readonly) Class superclass;


-(id)initWithPolicyHandler:(id)arg0 configuration:(id)arg1 namespacedObjectFactory:(id)arg2 ;
-(id)invertColor:(id)arg0 defaultColor:(id)arg1 ;
-(id)invertedBorder:(id)arg0 ;
-(id)invertedComponent:(id)arg0 context:(id)arg1 ;
-(id)invertedComponentShadow:(id)arg0 ;
-(id)invertedComponentStyle:(id)arg0 context:(id)arg1 ;
-(id)invertedComponentTextStyleBackgroundColors:(id)arg0 context:(id)arg1 ;
-(id)invertedComponentTextStyleForegroundColors:(id)arg0 context:(id)arg1 ;
-(id)invertedDataTableBorder:(id)arg0 ;
-(id)invertedDataTableBorderSides:(id)arg0 ;
-(id)invertedDataTableCellStyle:(id)arg0 ;
-(id)invertedDataTableColumnStyle:(id)arg0 ;
-(id)invertedDataTableRowStyle:(id)arg0 ;
-(id)invertedDataTableStyle:(id)arg0 ;
-(id)invertedDocumentStyle:(id)arg0 context:(id)arg1 ;
-(id)invertedDropCapStyle:(id)arg0 ;
-(id)invertedGradientFill:(id)arg0 ;
-(id)invertedLinearGradient:(id)arg0 ;
-(id)invertedStrokeStyle:(id)arg0 ;
-(id)invertedTextDecoration:(id)arg0 ;
-(id)invertedTextShadow:(id)arg0 ;
-(id)invertedTextStroke:(id)arg0 ;
-(id)invertedTextStyleBackgroundColors:(id)arg0 context:(id)arg1 ;
-(id)invertedTextStyleForegroundColors:(id)arg0 context:(id)arg1 ;
-(void)invertBackgroundColorsOfComponentTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(void)invertBackgroundColorsOfTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(void)invertComponentStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(void)invertForegroundColorsOfComponentTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(void)invertForegroundColorsOfTextStyle:(id)arg0 component:(id)arg1 DOM:(id)arg2 context:(id)arg3 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif