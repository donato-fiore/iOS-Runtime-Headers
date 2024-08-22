// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCGALLERYCELL_H
#define NTKCGALLERYCELL_H

@class UITableViewCell, UICollectionView, UIStackView, NSLayoutConstraint, NSString, UILabel, UICollectionViewFlowLayout, NSArray;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, NTKCGalleryCellDelegate;


#import "NTKGalleryCollection.h"

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>



@property (nonatomic) BOOL allSnapshotsLoaded; // ivar: _allSnapshotsLoaded
@property (retain, nonatomic) NTKGalleryCollection *collection; // ivar: _collection
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) CGPoint contentOffset;
@property (retain, nonatomic) UIStackView *contentStack; // ivar: _contentStack
@property (retain, nonatomic) NSLayoutConstraint *cvHeightConstraint; // ivar: _cvHeightConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCGalleryCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *footer; // ivar: _footer
@property (retain, nonatomic) UIStackView *footerStack; // ivar: _footerStack
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout; // ivar: _layout
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (nonatomic) BOOL showFooterInCollectionView; // ivar: _showFooterInCollectionView
@property (copy, nonatomic) NSArray *snapshotRequests; // ivar: _snapshotRequests
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *title; // ivar: _title
@property (retain, nonatomic) UIStackView *titleStack; // ivar: _titleStack


+(CGFloat)estimatedRowHeight;
+(id)reuseIdentifier;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)containerViewForFace:(id)arg0 ;
-(id)faceForLocation:(struct CGPoint )arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGPoint )_contentInsetPoint;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(void)_configureViews;
-(void)_fontSizeDidChange;
-(void)clearSelectedFaces;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)selectFace:(id)arg0 ;
-(void)updateFaceAtIndex:(NSUInteger)arg0 ;


@end


#endif