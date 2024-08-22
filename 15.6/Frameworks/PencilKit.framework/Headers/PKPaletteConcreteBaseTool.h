// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTECONCRETEBASETOOL_H
#define PKPALETTECONCRETEBASETOOL_H

@class NSString;
@protocol PKPaletteTool, PKPaletteErasingTool, PKPaletteHandwritingTool, PKPaletteInkingTool;

#import <Foundation/Foundation.h>


@interface PKPaletteConcreteBaseTool : NSObject <PKPaletteTool>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;


-(BOOL)isErasingTool;
-(BOOL)isHandwritingTool;
-(BOOL)isInkingTool;
-(BOOL)isLassoTool;
-(BOOL)isRulerTool;


@end


#endif