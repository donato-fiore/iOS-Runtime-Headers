// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPHYSICALCIRCLESTEMPLATEVIEWELEMENT_H
#define SKUIPHYSICALCIRCLESTEMPLATEVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUIPaletteViewElement.h"
#import "SKUIPhysicalCirclesTemplateDOMFeature.h"
#import "SKUILabelViewElement.h"

@interface SKUIPhysicalCirclesTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *circleItemElements;
@property (readonly, nonatomic) SKUIPaletteViewElement *footerPaletteElement;
@property (readonly, nonatomic) SKUIPhysicalCirclesTemplateDOMFeature *scriptInterface; // ivar: _scriptInterface
@property (readonly, nonatomic) SKUILabelViewElement *subtitleElement;
@property (readonly, nonatomic) SKUILabelViewElement *titleElement;


+(id)supportedFeatures;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)dispatchRemovedEventWithChildViewElement:(id)arg0 ;


@end


#endif