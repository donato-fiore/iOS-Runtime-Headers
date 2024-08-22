// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNPHOTOPICKERPROVIDERSUGGESTIONSGROUP_H
#define CNPHOTOPICKERPROVIDERSUGGESTIONSGROUP_H

@class NSArray;


#import "CNPhotoPickerProviderGroup.h"

@interface CNPhotoPickerProviderSuggestionsGroup : CNPhotoPickerProviderGroup {
    NSArray *_addItems;
}




-(NSInteger)addProviderItem:(id)arg0 ;
-(NSInteger)indexForDefaultMonogram;
-(NSInteger)removeProviderItem:(id)arg0 ;
-(NSUInteger)maxRecentsAndMonogramsCount;
-(id)addItems;
-(id)dedupedSuggestionItemsGroupedByProvider;
-(id)defaultMonogramItem;
-(id)initWithProviders:(id)arg0 environment:(id)arg1 allowAddItem:(BOOL)arg2 ;
-(id)itemsForProviderIdentifier:(id)arg0 ;
-(id)paddedDisplayItems:(id)arg0 ;
-(id)providerItems:(id)arg0 withMaxRecentsAndMonogramsCount:(NSUInteger)arg1 ;
-(id)providerOfClass:(Class)arg0 ;
-(void)loadAvailablePaddingItems;
-(void)prepareDisplayItems:(id)arg0 ;
-(void)providerItemDidUpdate:(id)arg0 ;
-(void)reloadMonogramProviderGroupWithVisualIdentity:(id)arg0 size:(struct CGSize )arg1 RTL:(BOOL)arg2 ;
-(void)setAddItems:(id)arg0 ;


@end


#endif