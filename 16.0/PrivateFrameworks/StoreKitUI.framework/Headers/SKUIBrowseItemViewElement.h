// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIBROWSEITEMVIEWELEMENT_H
#define SKUIBROWSEITEMVIEWELEMENT_H

@class NSArray;


#import "SKUIItemViewElement.h"
#import "SKUIImageViewElement.h"

@interface SKUIBrowseItemViewElement : SKUIItemViewElement

@property (readonly, nonatomic) SKUIImageViewElement *decorationImage;
@property (readonly, nonatomic) BOOL expands; // ivar: _expands
@property (readonly, nonatomic) NSArray *metadata;


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif