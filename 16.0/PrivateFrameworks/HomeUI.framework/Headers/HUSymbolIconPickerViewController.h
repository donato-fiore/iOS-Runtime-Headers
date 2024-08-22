// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSYMBOLICONPICKERVIEWCONTROLLER_H
#define HUSYMBOLICONPICKERVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, HFImageIconDescriptor, UIColor;
@protocol HUSymbolIconPickerDelegate;



@interface HUSymbolIconPickerViewController : UICollectionViewController

@property (weak, nonatomic) NSObject<HUSymbolIconPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *iconDescriptors; // ivar: _iconDescriptors
@property (retain, nonatomic) HFImageIconDescriptor *selectedIconDescriptor; // ivar: _selectedIconDescriptor
@property (retain, nonatomic) UIColor *selectedTintColor; // ivar: _selectedTintColor


+(NSInteger)indexOfIconDescriptor:(id)arg0 inArray:(id)arg1 ;
+(id)sceneIconDescriptors;
+(id)tintColors;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_buildColorTintSectionWithEnvironment:(id)arg0 ;
-(id)_buildHeaderSectionWithEnvironment:(id)arg0 ;
-(id)_buildIconPickerSectionWithEnvironment:(id)arg0 ;
-(id)_layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithIconDescriptors:(id)arg0 selectedIconDescriptor:(id)arg1 selectedTintColor:(id)arg2 delegate:(id)arg3 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)applyTintColor;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif