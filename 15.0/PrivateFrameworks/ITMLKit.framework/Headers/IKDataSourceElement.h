// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDATASOURCEELEMENT_H
#define IKDATASOURCEELEMENT_H

@class NSArray, NSDictionary;
@protocol IKDataSourceElementImplementing;


#import "IKViewElement.h"
#import "IKChangeSet.h"

@interface IKDataSourceElement : IKViewElement {
    BOOL _areItemsBound;
    ? _implFlags;
}


@property (nonatomic) NSInteger autoHighlightIndex; // ivar: _autoHighlightIndex
@property (copy, nonatomic) NSArray *autoHighlightedChildElements; // ivar: _autoHighlightedChildElements
@property (readonly, nonatomic) NSObject<IKDataSourceElementImplementing> *impl; // ivar: _impl
@property (copy, nonatomic) NSDictionary *indexTitles; // ivar: _indexTitles
@property (readonly, nonatomic, getter=areItemsBound) BOOL itemsBound;
@property (readonly, nonatomic) IKChangeSet *itemsChangeSet;
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;


+(NSUInteger)updateTypeForChangeInAttribute:(id)arg0 fromValue:(id)arg1 toValue:(id)arg2 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg0 ;
-(NSInteger)indexOfItemForElement:(id)arg0 ;
-(NSInteger)numberOfItems;
-(id)_parsedIndexTitlesFromString:(id)arg0 ;
-(id)applyUpdatesWithElement:(id)arg0 ;
-(id)debugDescription;
-(id)elementForItemAtIndex:(NSInteger)arg0 ;
-(id)firstItemElement;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)lastItemElement;
-(id)masterPrototypeForItemAtIndex:(NSUInteger)arg0 ;
-(id)prototypeForItemAtIndex:(NSInteger)arg0 ;
-(id)proxyElementForLoadedChildElement:(id)arg0 ;
-(void)appDocumentDidMarkStylesDirty;
-(void)configureUpdatesWithElement:(id)arg0 ;
-(void)dealloc;
-(void)enumerateItemElementsUsingBlock:(id)arg0 ;
-(void)loadIndex:(NSInteger)arg0 ;
-(void)resetProperty:(NSUInteger)arg0 ;
-(void)resetUpdates;
-(void)unloadIndex:(NSInteger)arg0 ;


@end


#endif