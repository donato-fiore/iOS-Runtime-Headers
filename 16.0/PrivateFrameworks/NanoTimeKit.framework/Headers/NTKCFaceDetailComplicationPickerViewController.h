// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCFACEDETAILCOMPLICATIONPICKERVIEWCONTROLLER_H
#define NTKCFACEDETAILCOMPLICATIONPICKERVIEWCONTROLLER_H

@class UITableViewController, UITableViewDiffableDataSource, NSString, NSIndexPath;
@protocol NTKComplicationPickerListProviderListener, NTKPeopleComplicationPickerViewControllerDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKComplicationPickerListProvider;


#import "NTKCFaceDetailComplicationCellProvider.h"
#import "NTKFaceSlotComplicationTopLevelListProvider.h"

@interface NTKCFaceDetailComplicationPickerViewController : UITableViewController <NTKComplicationPickerListProviderListener, NTKPeopleComplicationPickerViewControllerDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate>



@property (retain, nonatomic) NTKCFaceDetailComplicationCellProvider *cellProvider; // ivar: _cellProvider
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailComplicationPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDoneInitialScrollToItem; // ivar: _hasDoneInitialScrollToItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *indexPathToScrollToAfterLayout; // ivar: _indexPathToScrollToAfterLayout
@property (readonly, nonatomic) NSObject<NTKComplicationPickerListProvider> *listProvider; // ivar: _listProvider
@property (readonly, nonatomic) NSString *slot; // ivar: _slot
@property (readonly) Class superclass;
@property (readonly, nonatomic) NTKFaceSlotComplicationTopLevelListProvider *topLevelListProvider; // ivar: _topLevelListProvider


-(id)detailViewControllerForSectionInfo:(id)arg0 ;
-(id)initWithFace:(id)arg0 slot:(id)arg1 selectedComplication:(id)arg2 ;
-(id)initWithSlot:(id)arg0 listProvider:(id)arg1 title:(id)arg2 selectedComplication:(id)arg3 ;
-(void)_configureWithSlot:(id)arg0 listProvider:(id)arg1 selectedComplication:(id)arg2 ;
-(void)complicationPickerListProviderDidUpdate:(id)arg0 ;
-(void)faceDetailComplicationPickerViewController:(id)arg0 didSelectComplication:(id)arg1 ;
-(void)peopleComplicationPickerViewController:(id)arg0 didSelectItem:(id)arg1 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif