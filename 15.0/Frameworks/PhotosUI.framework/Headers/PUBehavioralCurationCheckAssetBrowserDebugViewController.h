// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBEHAVIORALCURATIONCHECKASSETBROWSERDEBUGVIEWCONTROLLER_H
#define PUBEHAVIORALCURATIONCHECKASSETBROWSERDEBUGVIEWCONTROLLER_H

@class NSPredicate, NSString, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "PUPhotosAlbumViewController.h"

@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSPredicate *_predicate;
    NSString *_selectionName;
    BOOL _sortAscending;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowToolbar;
-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(CGFloat)semanticScoreFromBehavioralScore:(CGFloat)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_goldAssetUUIDs;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)newToolbarItems;
-(id)phScoreKeyPathsForSelectionName:(id)arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)predicateForSelectionName:(id)arg0 ;
-(id)selectionNames;
-(id)sortDescriptorForSelectionName:(id)arg0 ;
-(void)_doneEditingSettings:(id)arg0 ;
-(void)_editSettings:(id)arg0 ;
-(void)_update;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif