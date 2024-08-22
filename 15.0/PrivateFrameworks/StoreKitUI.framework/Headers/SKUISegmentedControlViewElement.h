// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISEGMENTEDCONTROLVIEWELEMENT_H
#define SKUISEGMENTEDCONTROLVIEWELEMENT_H

@class NSString, NSArray;


#import "SKUIViewElement.h"
#import "SKUIDividerViewElement.h"

@interface SKUISegmentedControlViewElement : SKUIViewElement

@property (readonly, nonatomic) SKUIDividerViewElement *bottomDivider;
@property (readonly, nonatomic) NSInteger initialSelectedItemIndex;
@property (readonly, nonatomic) NSInteger maximumNumberOfVisibleItems; // ivar: _maximumNumberOfVisibleItems
@property (readonly, nonatomic) NSString *moreListTitle; // ivar: _moreListTitle
@property (readonly, nonatomic) NSArray *segmentItemTitles;


-(NSInteger)pageComponentType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)_enumerateItemElementsUsingBlock:(id)arg0 ;
-(void)dispatchEventOfType:(NSUInteger)arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif