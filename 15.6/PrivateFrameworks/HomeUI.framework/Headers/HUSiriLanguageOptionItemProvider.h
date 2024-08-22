// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIRILANGUAGEOPTIONITEMPROVIDER_H
#define HUSIRILANGUAGEOPTIONITEMPROVIDER_H

@class HFItemProvider, HFAccessorySettingSiriLanguageAdapter, NSSet, HFSiriLanguageOptionsManager, HFItem;



@interface HUSiriLanguageOptionItemProvider : HFItemProvider

@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // ivar: _adapter
@property (retain, nonatomic) NSSet *items; // ivar: _items
@property (readonly, nonatomic) NSUInteger optionStyle; // ivar: _optionStyle
@property (retain, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager; // ivar: _siriLanguageOptionsManager
@property (retain, nonatomic) HFItem *sourceItem; // ivar: _sourceItem


-(id)_createSiriLanguageOptionItems:(id)arg0 ;
-(id)_reloadItemsWithAdapter;
-(id)_reloadItemsWithSiriLanguageOptionsManager;
-(id)initWithAdapter:(id)arg0 optionStyle:(NSUInteger)arg1 ;
-(id)initWithSiriLanguageOptionsManager:(id)arg0 sourceItem:(id)arg1 optionStyle:(NSUInteger)arg2 ;
-(id)reloadItems;


@end


#endif