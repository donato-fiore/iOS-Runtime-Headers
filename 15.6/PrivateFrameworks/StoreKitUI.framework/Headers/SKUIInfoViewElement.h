// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIINFOVIEWELEMENT_H
#define SKUIINFOVIEWELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUILabelViewElement.h"

@interface SKUIInfoViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUILabelViewElement *titleElement;
@property (readonly, nonatomic) NSArray *valueElements;




@end


#endif