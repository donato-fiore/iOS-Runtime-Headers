// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCOLORPICKER_H
#define WFCOLORPICKER_H

@class UIView, UICollectionView, NSArray, NSString, WFColor;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, WFColorPickerDelegate;



@interface WFColorPicker : UIView <UICollectionViewDelegate, UICollectionViewDataSource>



@property (retain, nonatomic) UICollectionView *colorCollectionView; // ivar: _colorCollectionView
@property (retain, nonatomic) NSArray *colorNames; // ivar: _colorNames
@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFColorPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFColor *selectedColor; // ivar: _selectedColor
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;


@end


#endif