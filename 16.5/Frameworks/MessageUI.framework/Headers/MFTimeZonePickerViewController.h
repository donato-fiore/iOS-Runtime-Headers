// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFTIMEZONEPICKERVIEWCONTROLLER_H
#define MFTIMEZONEPICKERVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, NSArray, NSTimeZone, UICollectionViewDiffableDataSource;
@protocol UISearchResultsUpdating, UICollectionViewDelegate, EFLoggable, MFTimeZonePickerViewControllerDelegate;



@interface MFTimeZonePickerViewController : UIViewController <UISearchResultsUpdating, UICollectionViewDelegate, EFLoggable>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSString *currentCityName; // ivar: _currentCityName
@property (retain, nonatomic) NSArray *currentFilteredTimeZones; // ivar: _currentFilteredTimeZones
@property (retain, nonatomic) NSTimeZone *currentTimeZone; // ivar: _currentTimeZone
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFTimeZonePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)createCollectionViewLayout;
-(id)initWithTimeZone:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)updateCurrentTimeZoneCity:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif