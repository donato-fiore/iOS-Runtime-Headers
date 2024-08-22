// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef READERFORMATVIEWCONTROLLER_H
#define READERFORMATVIEWCONTROLLER_H

@class UIViewController, UICollectionView, SFReaderAppearanceThemeSelector, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, _SFSettingsAlertOptionsGroupController, SFReaderContext;



@interface ReaderFormatViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    SFReaderAppearanceThemeSelector *_themeSelector;
    id<_SFSettingsAlertOptionsGroupController> *_fontGroupController;
    UICollectionViewCellRegistration" _cellRegistrations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger provenance; // ivar: _provenance
@property (readonly, nonatomic) NSObject<SFReaderContext> *readerContext; // ivar: _readerContext
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithReaderContext:(id)arg0 provenance:(NSInteger)arg1 ;
-(void)_updateCloseButton;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif