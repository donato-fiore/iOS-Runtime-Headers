// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUZONEMODULECONTROLLER_H
#define HUZONEMODULECONTROLLER_H

@class UICollectionViewListCell, NSString, UITextField, HFZoneModule, HMRoom;
@protocol UITextFieldDelegate;


#import "HUItemModuleController.h"
#import "HUEditableTextCollectionListCell.h"

@interface HUZoneModuleController : HUItemModuleController <UITextFieldDelegate>



@property (weak, nonatomic) HUEditableTextCollectionListCell *createNewZoneCell; // ivar: _createNewZoneCell
@property (weak, nonatomic) UICollectionViewListCell *currentZoneItemCell; // ivar: _currentZoneItemCell
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UITextField *editingTextField; // ivar: _editingTextField
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFZoneModule *module;
@property (retain, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;


-(BOOL)_validateNewZoneName:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(Class)collectionCellClassForItem:(id)arg0 ;
-(NSUInteger)didSelectItem:(id)arg0 ;
-(id)_createNewZoneWithName:(id)arg0 ;
-(id)_didSelectZoneBuilderItem:(id)arg0 ;
-(id)_didSelectZoneItem:(id)arg0 ;
-(id)finishZoneNameEditing;
-(id)initWithModule:(id)arg0 room:(id)arg1 ;
-(void)_configureCreateNewZoneItem:(id)arg0 forCell:(id)arg1 ;
-(void)_configureCurrentZonesItem:(id)arg0 forCell:(id)arg1 ;
-(void)_configureZoneBuilderItem:(id)arg0 forCell:(id)arg1 ;
-(void)_configureZoneItem:(id)arg0 forCell:(id)arg1 ;
-(void)_updateCreateNewZoneCellText:(BOOL)arg0 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif