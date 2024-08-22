// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDSEUNBOUNDITEMSIMPL_H
#define IKDSEUNBOUNDITEMSIMPL_H

@class NSString, NSDictionary, NSArray;
@protocol IKDataSourceElementImplementing;

#import <Foundation/Foundation.h>

#import "IKDataSourceElement.h"
#import "IKChangeSet.h"

@interface IKDSEUnboundItemsImpl : NSObject <IKDataSourceElementImplementing>



@property (readonly, weak, nonatomic) IKDataSourceElement *dataSourceElement; // ivar: _dataSourceElement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *indexTitles;
@property (copy, nonatomic) NSArray *itemElements; // ivar: _itemElements
@property (retain, nonatomic) IKChangeSet *itemsChangeSet; // ivar: _itemsChangeSet
@property (readonly, nonatomic) NSArray *masterPrototypes;
@property (readonly, nonatomic) NSArray *prototypes;
@property (readonly, copy, nonatomic) NSArray *proxiedItemElements;
@property (readonly) Class superclass;


-(NSInteger)indexOfItemForElement:(id)arg0 ;
-(NSInteger)numberOfItems;
-(id)elementForItemAtIndex:(NSInteger)arg0 ;
-(id)initWithDataSourceElement:(id)arg0 ;
-(id)prototypeForItemAtIndex:(NSInteger)arg0 ;
-(void)applyUpdatesWithImplementation:(id)arg0 usingUpdater:(id)arg1 ;
-(void)configureUpdatesWithImplementation:(id)arg0 ;
-(void)initializeWithElementFactory:(id)arg0 ;
-(void)loadIndex:(NSInteger)arg0 ;
-(void)resetUpdates;
-(void)teardown;
-(void)unloadIndex:(NSInteger)arg0 ;
-(void)updateStylesUsingUpdater:(id)arg0 ;


@end


#endif