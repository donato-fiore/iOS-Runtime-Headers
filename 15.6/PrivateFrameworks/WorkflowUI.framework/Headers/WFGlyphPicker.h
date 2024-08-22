// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFGLYPHPICKER_H
#define WFGLYPHPICKER_H

@class UIView, UICollectionView, UICollectionViewFlowLayout, NSString, NSArray, UISegmentedControl;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, WFGlyphPickerTabBarDelegate, WFGlyphPickerDelegate;


#import "WFGlyphPickerTabBar.h"

@interface WFGlyphPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WFGlyphPickerTabBarDelegate>



@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) NSInteger control; // ivar: _control
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFGlyphPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat glyphDimension; // ivar: _glyphDimension
@property (copy, nonatomic) NSArray *glyphSections; // ivar: _glyphSections
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lastEvent; // ivar: _lastEvent
@property (nonatomic) UIEdgeInsets sectionInset; // ivar: _sectionInset
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (nonatomic) unsigned short selectedGlyphCharacter; // ivar: _selectedGlyphCharacter
@property (readonly) Class superclass;
@property (weak, nonatomic) WFGlyphPickerTabBar *tabBar; // ivar: _tabBar
@property (nonatomic) BOOL useOutlineGlyphsOnly; // ivar: _useOutlineGlyphsOnly


+(NSUInteger)numberOfSections;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForGlyphCharacter:(unsigned short)arg0 ;
-(id)initWithControl:(NSInteger)arg0 glyphDimension:(CGFloat)arg1 sectionInset:(struct UIEdgeInsets )arg2 ;
-(id)initWithControl:(NSInteger)arg0 glyphDimension:(CGFloat)arg1 sectionInset:(struct UIEdgeInsets )arg2 useSystemGlyphsOnly:(BOOL)arg3 useOutlineGlyphsOnly:(BOOL)arg4 ;
-(unsigned short)glyphCharacterAtIndexPath:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)glyphPickerTabBar:(id)arg0 didSelectTabAtIndex:(NSUInteger)arg1 ;
-(void)layoutSubviews;
-(void)pickedSegment:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)scrollToSection:(NSInteger)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif