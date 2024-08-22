// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCOLORPALETTEVIEW_H
#define AKCOLORPALETTEVIEW_H

@class UIControl, UICollectionView, UIColor, NSArray, NSString;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, AKInkIsUpdatable, AKUserInterfaceItem, AKColorChooserUserInterfaceItem;



@interface AKColorPaletteView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, AKInkIsUpdatable, AKUserInterfaceItem, AKColorChooserUserInterfaceItem>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (readonly) Class superclass;


-(BOOL)wantsInkUpdate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_indexPathOfColor:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_itemSizeInContainer;
-(void)_commonInit;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)scrollToCurrentColor;


@end


#endif