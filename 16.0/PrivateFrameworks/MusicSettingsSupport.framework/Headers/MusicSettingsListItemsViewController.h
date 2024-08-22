// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICSETTINGSLISTITEMSVIEWCONTROLLER_H
#define MUSICSETTINGSLISTITEMSVIEWCONTROLLER_H

@class PSListItemsController, NSArray, NSString;
@protocol MusicSettingsSupportController;



@interface MusicSettingsListItemsViewController : PSListItemsController <MusicSettingsSupportController>



@property (copy, nonatomic) NSArray *allSpecifiers; // ivar: _allSpecifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *stringsTable; // ivar: _stringsTable
@property (readonly) Class superclass;


-(id)itemsFromParent;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 bundle:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)valueForMusicCapability:(id)arg0 ;
-(void)listItemSelected:(id)arg0 ;
-(void)updateVisibleSpecifiers;


@end


#endif