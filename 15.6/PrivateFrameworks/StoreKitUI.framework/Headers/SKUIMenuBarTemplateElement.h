// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMENUBARTEMPLATEELEMENT_H
#define SKUIMENUBARTEMPLATEELEMENT_H

@class SKUIViewElement<SKUIMenuBarViewElement>;


#import "SKUIViewElement.h"
#import "SKUINavigationBarViewElement.h"

@interface SKUIMenuBarTemplateElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElement<SKUIMenuBarViewElement> *menuBar;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;


-(id)_menuBarChildOfElement:(id)arg0 ;


@end


#endif