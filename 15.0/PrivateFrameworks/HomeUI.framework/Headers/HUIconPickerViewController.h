// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUICONPICKERVIEWCONTROLLER_H
#define HUICONPICKERVIEWCONTROLLER_H

@class UICollectionViewController, NSArray;
@protocol HUIconPickerViewControllerDelegate, HFIconDescriptor;



@interface HUIconPickerViewController : UICollectionViewController

@property (weak, nonatomic) NSObject<HUIconPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSArray *iconDescriptors; // ivar: _iconDescriptors
@property (retain, nonatomic) NSObject<HFIconDescriptor> *selectedIconDescriptor; // ivar: _selectedIconDescriptor


+(id)sceneIconDescriptors;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithIconDescriptors:(id)arg0 selectedIconDescriptor:(id)arg1 delegate:(id)arg2 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif