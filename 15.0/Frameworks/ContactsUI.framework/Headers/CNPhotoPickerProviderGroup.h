// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERPROVIDERGROUP_H
#define CNPHOTOPICKERPROVIDERGROUP_H

@class NSArray, NSString, NSMutableDictionary;
@protocol CNPhotoPickerProviderItemDelegate, CNScheduler, CNPhotoPickerProviderGroupDelegate;

#import <Foundation/Foundation.h>


@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate>



@property (retain, nonatomic) NSArray *addItems; // ivar: _addItems
@property (retain, nonatomic) NSArray *addedItems; // ivar: _addedItems
@property (readonly, nonatomic) BOOL allowAddItem; // ivar: _allowAddItem
@property (retain, nonatomic) NSArray *availablePaddingItems; // ivar: _availablePaddingItems
@property (readonly, nonatomic) NSObject<CNScheduler> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPhotoPickerProviderGroupDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayItems; // ivar: _displayItems
@property (readonly, nonatomic) NSInteger groupType; // ivar: _groupType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *itemsGroupedByProvider; // ivar: _itemsGroupedByProvider
@property (nonatomic) NSUInteger itemsPerRow; // ivar: _itemsPerRow
@property (retain, nonatomic) NSArray *paddingItems; // ivar: _paddingItems
@property (readonly, nonatomic) NSObject<CNScheduler> *providerItemRenderingQueue; // ivar: _providerItemRenderingQueue
@property (retain, nonatomic) NSArray *providers; // ivar: _providers
@property (retain, nonatomic) NSArray *removedItems; // ivar: _removedItems
@property (retain, nonatomic) NSArray *removedPaddingItems; // ivar: _removedPaddingItems
@property (readonly, nonatomic) BOOL showCircleMask; // ivar: _showCircleMask
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CNScheduler> *workQueue; // ivar: _workQueue


+(id)addItemsGroupWithProviders:(id)arg0 environment:(id)arg1 ;
+(id)animojiGroupWithProviders:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
+(id)emojiGroupWithProviders:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
+(id)injectedItemsGroupWithEnvironment:(id)arg0 ;
+(id)suggestionsGroupWithProviders:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
-(BOOL)hasAddedProviderItems;
-(NSInteger)addProviderItem:(id)arg0 ;
-(NSInteger)numberOfItems;
-(NSInteger)removeProviderItem:(id)arg0 ;
-(id)initWithProviders:(id)arg0 groupType:(NSInteger)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(id)itemsForProviderIdentifier:(id)arg0 ;
-(id)providerItemAtIndex:(NSInteger)arg0 ;
-(id)suggestionsProviderPrecedingFacesProvider;
-(void)loadProvidersItemsForSize:(struct CGSize )arg0 itemsPerRow:(CGFloat)arg1 scale:(CGFloat)arg2 RTL:(BOOL)arg3 ;
-(void)prepareDisplayItems:(id)arg0 ;
-(void)providerItemDidUpdate:(id)arg0 ;
-(void)reloadDisplayItemsNotifyDelegate:(BOOL)arg0 ;
-(void)removeAllAddedProviderItems;


@end


#endif