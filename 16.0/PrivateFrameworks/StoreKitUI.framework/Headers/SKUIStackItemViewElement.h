// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKITEMVIEWELEMENT_H
#define SKUISTACKITEMVIEWELEMENT_H

@class NSArray;


#import "SKUIItemViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIStackItemViewElement : SKUIItemViewElement

@property (readonly, nonatomic) NSArray *imageElements;
@property (readonly, nonatomic) SKUILabelViewElement *textElement;


-(NSInteger)pageComponentType;


@end


#endif