// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTPAGECUSTOMIZATIONVIEWCONTROLLER_H
#define SFSTARTPAGECUSTOMIZATIONVIEWCONTROLLER_H

@class UIViewController, NSArray, UICollectionView, UICollectionViewDiffableDataSource, WBSStartPageBackgroundImagesDataSource, NSMutableDictionary, NSString;
@protocol SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, SFStartPageDataSourceObserving, SFStartPageCustomizationDataSource;



@interface SFStartPageCustomizationViewController : UIViewController <SFStartPageBackgroundImageCellDelegate, SFStartPageCustomizationCellDelegate, UICollectionViewDelegate, PHPickerViewControllerDelegate, SFStartPageDataSourceObserving>

 {
    NSArray *_backgroundImages;
    UICollectionView *_backgroundImagesCollectionView;
    UICollectionViewDiffableDataSource *_backgroundImagesCollectionViewDataSource;
    WBSStartPageBackgroundImagesDataSource *_backgroundImagesDataSource;
    BOOL _backgroundSectionUnconditionallyVisible;
    NSMutableDictionary *_identifierToCustomizationItemMap;
    NSUInteger _reloadDataSupressionCount;
    UICollectionView *_rootCollectionView;
    UICollectionViewDiffableDataSource *_rootCollectionViewDataSource;
}


@property (weak) NSObject<SFStartPageCustomizationDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showsCloseButton; // ivar: _showsCloseButton
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)showsBackgroundImagesCell;
-(id)collectionView:(id)arg0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg1 atCurrentIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)initWithDataSource:(id)arg0 ;
-(id)makeBackgroundImageRegistration;
-(id)makeBackgroundImageToggleRegistration;
-(id)makeBackgroundImagesCollectionViewLayout;
-(id)makeCustomizationItemRegistration;
-(id)makeCustomizationSyncFooterRegistration;
-(id)makeCustomizationSyncToggleRegistration;
-(id)makeReorderingHandlers;
-(id)makeRootCollectionViewLayout;
-(void)_dismiss:(id)arg0 ;
-(void)_setCustomizationSyncWithValue:(id)arg0 ;
-(void)backgroundImageCellDidSelectClearButton:(id)arg0 ;
-(void)backgroundImagesDidChange:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)customizationItemOrderDidChange:(id)arg0 ;
-(void)dealloc;
-(void)highlightsContentDidChange:(id)arg0 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)reloadDataAnimatingDifferences:(BOOL)arg0 ;
-(void)reloadNavigationItemAnimated:(BOOL)arg0 ;
-(void)setCustomizationItemIdentifier:(id)arg0 enabled:(BOOL)arg1 ;
-(void)setUpBackgroundImagesCollectionViewDataSource;
-(void)setUpRootCollectionViewDataSource;
-(void)showPhotoPicker;
-(void)startPageCustomizationCellDidChangeValue:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif