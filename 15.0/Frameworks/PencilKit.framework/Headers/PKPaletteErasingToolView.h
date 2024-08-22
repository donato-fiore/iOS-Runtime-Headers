// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEERASINGTOOLVIEW_H
#define PKPALETTEERASINGTOOLVIEW_H

@class NSString;
@protocol PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate, PKPaletteHandwritingTool, PKPaletteInkingTool;


#import "PKPaletteToolView.h"
#import "PKPaletteAttributeViewController.h"

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate>

 {
    PKPaletteAttributeViewController *_attributeViewController;
}


@property (nonatomic, getter=isBitmapEraser) BOOL bitmapEraser; // ivar: _bitmapEraser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;


-(id)attributeViewController;
-(id)initWithToolIdentifier:(id)arg0 ;
-(void)_updateAttributesViewController;
-(void)erasingAttributesViewControllerDidChangeErasingType:(id)arg0 ;


@end


#endif