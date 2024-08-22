// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSVIEWCONTROLLER_H
#define HUFACERECOGNITIONUSERPHOTOSLIBRARYSETTINGSVIEWCONTROLLER_H

@class NSString;
@protocol HUTappableTextViewDelegate, HUItemModuleControllerHosting;


#import "HUItemTableViewController.h"
#import "HUFaceRecognitionUserPhotosLibrarySettingsItemManager.h"
#import "HUFaceRecognitionUserPhotosLibrarySettingsModuleController.h"

@interface HUFaceRecognitionUserPhotosLibrarySettingsViewController : HUItemTableViewController <HUTappableTextViewDelegate, HUItemModuleControllerHosting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsItemManager *photosLibrarySettingsItemManager; // ivar: _photosLibrarySettingsItemManager
@property (retain, nonatomic) HUFaceRecognitionUserPhotosLibrarySettingsModuleController *photosLibrarySettingsModuleController; // ivar: _photosLibrarySettingsModuleController
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithUserPhotosLibraryItem:(id)arg0 ;
-(id)itemModuleControllers;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tappableTextView:(id)arg0 tappedAtIndex:(NSUInteger)arg1 withAttributes:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif