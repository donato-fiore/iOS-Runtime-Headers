// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTECONCRETEBASETOOL_H
#define PKPALETTECONCRETEBASETOOL_H

@class NSString;
@protocol PKPaletteTool, PKPaletteErasingTool, PKPaletteHandwritingTool, PKPaletteInkingTool;

#import <Foundation/Foundation.h>

#import "PKToolConfiguration.h"

@interface PKPaletteConcreteBaseTool : NSObject <PKPaletteTool>

 {
    PKToolConfiguration *_cachedConfiguration;
}


@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant; // ivar: _toolVariant


-(BOOL)isCustomTool;
-(BOOL)isErasingTool;
-(BOOL)isHandwritingTool;
-(BOOL)isInkingTool;
-(BOOL)isLassoTool;
-(BOOL)isRulerTool;


@end


#endif