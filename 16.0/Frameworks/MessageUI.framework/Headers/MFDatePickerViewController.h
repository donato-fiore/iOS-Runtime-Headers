// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDATEPICKERVIEWCONTROLLER_H
#define MFDATEPICKERVIEWCONTROLLER_H

@class UIViewController, EFLocked, UICollectionView, UICollectionViewDiffableDataSource, NSString;
@protocol MFSendLaterHeaderCollectionViewCellDelegate, MFCalendarCollectionViewCellDelegate, MFTimeWheelCollectionViewCellDelegate, MFTimeHeaderCollectionViewCellDelegate, UICollectionViewDelegate, MFTimeZonePickerViewControllerDelegate, MFDatePickerViewControllerDelegate, OS_dispatch_queue;



@interface MFDatePickerViewController : UIViewController <MFSendLaterHeaderCollectionViewCellDelegate, MFCalendarCollectionViewCellDelegate, MFTimeWheelCollectionViewCellDelegate, MFTimeHeaderCollectionViewCellDelegate, UICollectionViewDelegate, MFTimeZonePickerViewControllerDelegate>



@property (retain, nonatomic) EFLocked *allItems; // ivar: _allItems
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFDatePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EFLocked *items; // ivar: _items
@property (nonatomic) BOOL shouldInvokeDelegate; // ivar: _shouldInvokeDelegate
@property (nonatomic) BOOL shouldShowDeleteButton; // ivar: _shouldShowDeleteButton
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue


-(id)_itemOfType:(NSUInteger)arg0 ;
-(id)_itemWithIdentifier:(id)arg0 ;
-(id)createCollectionViewLayout;
-(id)initWithType:(NSInteger)arg0 shouldShowDeleteButton:(BOOL)arg1 ;
-(id)initWithType:(NSInteger)arg0 shouldShowDeleteButton:(BOOL)arg1 shouldDismissCommit:(BOOL)arg2 ;
-(void)_cancel:(id)arg0 ;
-(void)_datePicked:(id)arg0 ;
-(void)calendarCollectionViewCell:(id)arg0 didChangeDate:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)datePickerTimeHeaderCollectionViewCell:(id)arg0 showTime:(BOOL)arg1 ;
-(void)sendLaterHeaderCollectionViewCellDateTapped:(id)arg0 ;
-(void)sendLaterHeaderCollectionViewCellTimeTapped:(id)arg0 ;
-(void)setUpDataSourceForCollectionView:(id)arg0 ;
-(void)setUpItemsProvider;
-(void)setUpNavigationBar;
-(void)timeCollectionViewCell:(id)arg0 didChangeDate:(id)arg1 ;
-(void)timeZonePickerViewController:(id)arg0 chooseTimeZone:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif