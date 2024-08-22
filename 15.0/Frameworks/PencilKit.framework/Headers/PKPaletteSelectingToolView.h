// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTESELECTINGTOOLVIEW_H
#define PKPALETTESELECTINGTOOLVIEW_H

@class NSString;
@protocol PKPaletteInkingTool, PKPaletteSelectingTool, PKPaletteErasingTool, PKPaletteHandwritingTool;


#import "PKPaletteToolView.h"
#import "PKInk.h"

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKInk *ink;
@property (retain, nonatomic) NSObject<PKPaletteInkingTool> *inkTool; // ivar: _inkTool
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;


-(id)attributeViewController;
-(id)initWithToolIdentifier:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif