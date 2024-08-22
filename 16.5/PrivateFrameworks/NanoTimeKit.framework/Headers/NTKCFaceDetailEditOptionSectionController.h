// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILEDITOPTIONSECTIONCONTROLLER_H
#define NTKCFACEDETAILEDITOPTIONSECTIONCONTROLLER_H

@class NSDictionary;
@protocol NTKCFaceDetailEditOptionSectionDelegate;


#import "NTKCFaceDetailSectionController.h"
#import "NTKCFaceDetailRowActionCell.h"
#import "NTKEditOptionCollection.h"
#import "NTKFaceView.h"

@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController

@property (retain, nonatomic) NTKCFaceDetailRowActionCell *actionRow; // ivar: _actionRow
@property (readonly, nonatomic) Class actionRowCellClass;
@property (retain, nonatomic) NTKEditOptionCollection *collection; // ivar: _collection
@property (weak, nonatomic) NSObject<NTKCFaceDetailEditOptionSectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) Class editCellClass; // ivar: _editCellClass
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (retain, nonatomic) NSDictionary *selectedOptions; // ivar: _selectedOptions


-(BOOL)_canDisplayActionRowForCustomEditMode:(NSInteger)arg0 andOption:(id)arg1 ;
-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(BOOL)_handleDidSelectActionRowForOption:(id)arg0 ;
-(BOOL)_handleDidSelectOption:(id)arg0 ;
-(BOOL)_hasActionRow;
-(BOOL)collectionChanged:(id)arg0 withSelectedOptions:(id)arg1 ;
-(id)_actionNameForOption:(id)arg0 ;
-(id)_initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 editOptionCollection:(id)arg3 faceView:(id)arg4 ;
-(id)optionAtIndex:(NSUInteger)arg0 ;
-(void)_createActionRow;
-(void)_customizeActionRow:(id)arg0 withEditOption:(id)arg1 ;
-(void)_refreshActionRowContent;
-(void)_updateSelectedOptions;
-(void)faceDidChange;
-(void)reloadActionRow;


@end


#endif