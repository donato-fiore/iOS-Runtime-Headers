// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITEMPLATEDEFINITIONVIEWELEMENT_H
#define SKUITEMPLATEDEFINITIONVIEWELEMENT_H

@class NSString;


#import "SKUIViewElement.h"
#import "SKUIPredicateListViewElement.h"

@interface SKUITemplateDefinitionViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIViewElement *contentViewElement;
@property (readonly, copy, nonatomic) NSString *definitionMode;
@property (readonly, copy, nonatomic) NSString *definitionType;
@property (readonly, nonatomic) SKUIPredicateListViewElement *predicateListViewElement;




@end


#endif