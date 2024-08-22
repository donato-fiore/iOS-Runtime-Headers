// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICONTENTUNAVAILABLETEMPLATEELEMENT_H
#define SKUICONTENTUNAVAILABLETEMPLATEELEMENT_H



#import "SKUIViewElement.h"
#import "SKUIButtonViewElement.h"
#import "SKUIImageViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIContentUnavailableTemplateElement : SKUIViewElement

@property (readonly, nonatomic) SKUIButtonViewElement *button;
@property (readonly, nonatomic) SKUIImageViewElement *image;
@property (readonly, nonatomic) SKUILabelViewElement *messageLabel;
@property (readonly, nonatomic) SKUILabelViewElement *titleLabel;


-(NSInteger)pageComponentType;


@end


#endif