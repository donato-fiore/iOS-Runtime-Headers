// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTECONCRETEHANDWRITINGTOOL_H
#define PKPALETTECONCRETEHANDWRITINGTOOL_H

@class NSString;
@protocol PKPaletteHandwritingTool, PKPaletteErasingTool, PKPaletteInkingTool;


#import "PKPaletteConcreteBaseTool.h"
#import "PKToolConfiguration.h"

@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool>



@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;


-(BOOL)isHandwritingTool;


@end


#endif