// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTECONCRETEHANDWRITINGTOOL_H
#define PKPALETTECONCRETEHANDWRITINGTOOL_H

@class NSString;
@protocol PKPaletteHandwritingTool, PKPaletteErasingTool, PKPaletteInkingTool;


#import "PKPaletteConcreteBaseTool.h"

@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;


-(BOOL)isHandwritingTool;


@end


#endif