// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKDSEBOUNDITEMSIMPL_H
#define IKDSEBOUNDITEMSIMPL_H

@class NSDictionary, NSString, NSArray, NSMutableDictionary, NSMutableIndexSet;
@protocol IKDataSourceElementImplementing;

#import <Foundation/Foundation.h>

#import "IKAppDataSet.h"
#import "IKDataSourceElement.h"
#import "IKChangeSet.h"
#import "_IKDSEPrototypeBundle.h"

@interface IKDSEBoundItemsImpl : NSObject <IKDataSourceElementImplementing>

 {
    BOOL _visibleIndexRangeIsDirty;
}


@property (copy, nonatomic) NSDictionary *childrenByItemID; // ivar: _childrenByItemID
@property (retain, nonatomic) IKAppDataSet *dataSet; // ivar: _dataSet
@property (readonly, weak, nonatomic) IKDataSourceElement *dataSourceElement; // ivar: _dataSourceElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (retain, nonatomic) IKChangeSet *itemsChangeSet; // ivar: _itemsChangeSet
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (retain, nonatomic) _IKDSEPrototypeBundle *prototypeBundle; // ivar: _prototypeBundle
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property (retain, nonatomic) NSMutableDictionary *proxiedItemElementsByItemID; // ivar: _proxiedItemElementsByItemID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *usedPrototypeMappingsByIdentifier; // ivar: _usedPrototypeMappingsByIdentifier
@property (retain, nonatomic) NSMutableIndexSet *visibleIndexSet; // ivar: _visibleIndexSet


+(BOOL)_canProxiedItemElementsBeUpdatedWithLoadedElements;
-(BOOL)canProxyUnloadedChildElement:(id)arg0 ;
-(NSInteger)indexOfItemForElement:(id)arg0 ;
-(NSInteger)numberOfItems;
-(id)_elementForItemAtIndex:(NSInteger)arg0 ;
-(id)_prototypeMappingForItemAtIndex:(NSInteger)arg0 ;
-(id)elementForItemAtIndex:(NSInteger)arg0 ;
-(id)initWithDataSourceElement:(id)arg0 ;
-(id)masterPrototypeForItemAtIndex:(NSUInteger)arg0 ;
-(id)prototypeForItemAtIndex:(NSInteger)arg0 ;
-(id)proxyElementForLoadedChildElement:(id)arg0 ;
-(void)_appendVisibleIndexSetWithIndex:(NSInteger)arg0 ;
-(void)_initializePrototypeBundleIfNeeded;
-(void)applyUpdatesWithImplementation:(id)arg0 usingUpdater:(id)arg1 ;
-(void)configureUpdatesWithImplementation:(id)arg0 ;
-(void)initializeWithElementFactory:(id)arg0 ;
-(void)loadIndex:(NSInteger)arg0 ;
-(void)resetImplicitUpdates;
-(void)resetUpdates;
-(void)teardown;
-(void)unloadIndex:(NSInteger)arg0 ;
-(void)updateStylesUsingUpdater:(id)arg0 ;


@end


#endif