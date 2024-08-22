// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICSETTINGSLISTVIEWCONTROLLER_H
#define MUSICSETTINGSLISTVIEWCONTROLLER_H

@class PSListController, NSArray, NSString;
@protocol MusicSettingsSupportController;



@interface MusicSettingsListViewController : PSListController <MusicSettingsSupportController>



@property (copy, nonatomic) NSArray *allSpecifiers; // ivar: _allSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *stringsTable; // ivar: _stringsTable
@property (readonly) Class superclass;


-(id)_sectionedCollectionRepresentation;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 bundle:(id)arg2 ;
-(id)specifiers;
-(id)valueForMusicCapability:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)updateVisibleSpecifiers;


@end


#endif