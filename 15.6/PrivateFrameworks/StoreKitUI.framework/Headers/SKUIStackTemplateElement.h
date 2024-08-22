// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTACKTEMPLATEELEMENT_H
#define SKUISTACKTEMPLATEELEMENT_H

@class NSMutableArray, NSArray;


#import "SKUIViewElement.h"
#import "SKUIIndexBarViewElement.h"
#import "SKUINavigationBarViewElement.h"
#import "SKUIToolbarViewElement.h"

@interface SKUIStackTemplateElement : SKUIViewElement {
    NSMutableArray *_collectionElements;
    SKUIViewElement *_collectionHeaderViewElement;
}


@property (readonly, nonatomic) NSArray *collectionElements;
@property (readonly, nonatomic) SKUIViewElement *collectionHeaderViewElement;
@property (readonly, nonatomic) SKUIIndexBarViewElement *indexBarViewElement;
@property (readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property (readonly, nonatomic) BOOL needsStateReset; // ivar: _needsStateReset
@property (readonly, nonatomic) NSInteger numberOfSplits;
@property (readonly, nonatomic) SKUIToolbarViewElement *toolbarElement;


-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;


@end


#endif