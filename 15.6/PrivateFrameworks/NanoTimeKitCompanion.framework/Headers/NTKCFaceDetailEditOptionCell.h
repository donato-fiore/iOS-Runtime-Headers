// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILEDITOPTIONCELL_H
#define NTKCFACEDETAILEDITOPTIONCELL_H

@class UICollectionView, NSString, UICollectionViewFlowLayout, UILabel, NSDictionary;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, NTKCFaceDetailEditOptionCellDelegate;


#import "NTKCDetailTableViewCell.h"
#import "NTKEditOptionCollection.h"
#import "NTKFace.h"
#import "NTKFaceView.h"

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

 {
    CGFloat _outlineOutset;
    CGFloat _outlinePadding;
    NSInteger _selectedIndex;
}


@property (retain, nonatomic) NTKEditOptionCollection *collection; // ivar: _collection
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKCFaceDetailEditOptionCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NTKFace *face; // ivar: _face
@property (weak, nonatomic) NTKFaceView *faceView; // ivar: _faceView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout; // ivar: _layout
@property (retain, nonatomic) UILabel *optionsDescription; // ivar: _optionsDescription
@property (retain, nonatomic) NSDictionary *selectedOptions; // ivar: _selectedOptions
@property (retain, nonatomic) NSDictionary *selectedSlotOptions; // ivar: _selectedSlotOptions
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect swatchFrame; // ivar: _swatchFrame


+(CGFloat)insetSpacingForStyle:(NSInteger)arg0 ;
+(id)reuseIdentifier;
-(BOOL)_isReloadCollectionRequired:(id)arg0 selectedOptions:(id)arg1 ;
-(BOOL)collectionChanged:(id)arg0 withSelectedOptions:(id)arg1 ;
-(CGFloat)_spacing;
-(CGFloat)rowHeight;
-(NSInteger)_editOptionIndexForIndexPath:(id)arg0 ;
-(NSInteger)_swatchImageContentMode;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_dequeueCellForIndexPath:(id)arg0 ;
-(id)_imageForIndexPath:(id)arg0 ;
-(id)_indexPathForEditOptionIndex:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCollection:(id)arg0 forFaceView:(id)arg1 face:(id)arg2 ;
-(void)_ensureIndexPathVisible:(id)arg0 animated:(BOOL)arg1 ;
-(void)_fontSizeDidChange;
-(void)_setupCell:(id)arg0 ;
-(void)_setupFromCollection;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)ensureIndexVisible:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)ensureSelectedOptionVisible:(BOOL)arg0 ;
-(void)reloadVisibleCells;
-(void)scrollToIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)scrollToSelectedOption:(BOOL)arg0 ;


@end


#endif