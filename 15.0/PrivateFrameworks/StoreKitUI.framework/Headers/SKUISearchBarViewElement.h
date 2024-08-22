// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISEARCHBARVIEWELEMENT_H
#define SKUISEARCHBARVIEWELEMENT_H

@class NSString;


#import "SKUIInputViewElement.h"
#import "SKUIViewElementText.h"

@interface SKUISearchBarViewElement : SKUIInputViewElement

@property (readonly, nonatomic) NSString *accessoryText; // ivar: _accessoryText
@property (readonly, nonatomic) SKUIViewElementText *defaultText; // ivar: _defaultText
@property (readonly, nonatomic) NSString *placeholderString; // ivar: _placeholderString
@property (readonly, nonatomic) NSString *searchHintsURLString; // ivar: _searchHintsURLString
@property (readonly, nonatomic) NSString *trendingSearchURLString; // ivar: _trendingSearchURLString


-(NSInteger)pageComponentType;
-(NSUInteger)elementType;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif