// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFROOMSUGGESTIONITEMPROVIDER_H
#define HFROOMSUGGESTIONITEMPROVIDER_H

@class HMHome, NSSet;
@protocol HFRoomSuggestionVendor;


#import "HFItemProvider.h"

@interface HFRoomSuggestionItemProvider : HFItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) NSUInteger suggestedRoomLimit; // ivar: _suggestedRoomLimit
@property (retain, nonatomic) NSSet *suggestionItems; // ivar: _suggestionItems
@property (retain, nonatomic) NSObject<HFRoomSuggestionVendor> *suggestionVendor; // ivar: _suggestionVendor
@property (copy, nonatomic) NSSet *supplementaryRoomBuilders; // ivar: _supplementaryRoomBuilders


-(id)_filteredSuggestions;
-(id)_filteredSupplementaryRoomBuilders;
-(id)_keyForRoomName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 suggestionVendor:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif