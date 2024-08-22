// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSIRILANGUAGEOPTIONITEM_H
#define HUSIRILANGUAGEOPTIONITEM_H

@class HFItem, HFAccessorySettingSiriLanguageAdapter, HFSiriLanguageOption, HFSiriLanguageOptionsManager;



@interface HUSiriLanguageOptionItem : HFItem

@property (readonly, nonatomic) HFAccessorySettingSiriLanguageAdapter *adapter; // ivar: _adapter
@property (retain, nonatomic) HFSiriLanguageOption *languageOption; // ivar: _languageOption
@property (readonly, nonatomic) NSUInteger optionStyle; // ivar: _optionStyle
@property (retain, nonatomic) HFSiriLanguageOptionsManager *siriLanguageOptionsManager; // ivar: _siriLanguageOptionsManager


+(id)selectionKeyForLanguageOption:(id)arg0 withOptionStyle:(NSUInteger)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithStyle:(NSUInteger)arg0 adapter:(id)arg1 languageOption:(id)arg2 ;
-(id)initWithStyle:(NSUInteger)arg0 siriLanguageOptionsManager:(id)arg1 languageOption:(id)arg2 ;


@end


#endif