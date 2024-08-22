// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEXPLORETEMPLATEELEMENT_H
#define SKUIEXPLORETEMPLATEELEMENT_H

@class NSArray;


#import "SKUIViewElement.h"
#import "SKUINavigationBarViewElement.h"

@interface SKUIExploreTemplateElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *childViewElements;
@property (readonly, nonatomic) SKUIViewElement *leftSplit;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) SKUIViewElement *rightSplit;
@property (readonly, nonatomic) BOOL usesSplits; // ivar: _usesSplits


-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(void)_getLeftSplit:(*id)arg0 rightSplit:(*id)arg1 ;


@end


#endif