// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEERASINGTOOLVIEW_H
#define PKPALETTEERASINGTOOLVIEW_H

@class NSString;
@protocol PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate, PKPaletteHandwritingTool, PKPaletteInkingTool;


#import "PKPaletteToolView.h"
#import "PKPaletteAttributeViewController.h"
#import "PKToolConfiguration.h"

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate>

 {
    PKPaletteAttributeViewController *_attributeViewController;
}


@property (nonatomic, getter=isBitmapEraser) BOOL bitmapEraser; // ivar: _bitmapEraser
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PKPaletteErasingTool> *erasingTool;
@property (readonly, nonatomic) NSObject<PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PKPaletteInkingTool> *inkingTool;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) CGFloat weight;


-(id)attributeViewController;
-(id)initWithToolIdentifier:(id)arg0 variant:(id)arg1 configuration:(id)arg2 ;
-(void)_updateAttributesViewController;
-(void)_updateAttributesViewControllerWeight;
-(void)erasingAttributesViewControllerDidChangeErasingType:(id)arg0 ;
-(void)erasingAttributesViewControllerDidChangeInkThickness:(id)arg0 ;
-(void)setToolProperties:(id)arg0 ;
-(void)setToolProperties:(id)arg0 updateUI:(BOOL)arg1 ;


@end


#endif