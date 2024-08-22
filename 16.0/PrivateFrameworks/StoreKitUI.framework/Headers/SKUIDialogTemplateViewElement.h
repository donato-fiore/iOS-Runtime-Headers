// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDIALOGTEMPLATEVIEWELEMENT_H
#define SKUIDIALOGTEMPLATEVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUIImageViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIDialogTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSInteger dialogType; // ivar: _dialogType
@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) SKUILabelViewElement *message;
@property (readonly, nonatomic) SKUILabelViewElement *title;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif