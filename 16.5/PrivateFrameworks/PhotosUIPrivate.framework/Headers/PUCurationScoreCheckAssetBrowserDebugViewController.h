// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCURATIONSCORECHECKASSETBROWSERDEBUGVIEWCONTROLLER_H
#define PUCURATIONSCORECHECKASSETBROWSERDEBUGVIEWCONTROLLER_H

@class NSString, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "PUPhotosAlbumViewController.h"

@interface PUCurationScoreCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    CGFloat _minimumValue;
    CGFloat _maximumValue;
    NSString *_scoreName;
    BOOL _sortAscending;
    BOOL _showsVideos;
    UIPickerView *_scorePickerView;
    UIPickerView *_sortPickerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_writeDiagnosticsToURL:(id)arg0 incorrectAssets:(id)arg1 ;
-(BOOL)shouldShowToolbar;
-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_cloneAsset:(id)arg0 toDirectory:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)newToolbarItems;
-(id)phScoreKeyPathByScoreName;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(id)plScoreKeyPathByScoreName;
-(id)scoreNames;
-(void)_doneEditingSettings:(id)arg0 ;
-(void)_editSettings:(id)arg0 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg0 ;
-(void)_presentTapToRadar;
-(void)_setMaximum:(id)arg0 ;
-(void)_setMinimum:(id)arg0 ;
-(void)_setShowsVideos:(id)arg0 ;
-(void)_update;
-(void)getTitle:(*id)arg0 prompt:(*id)arg1 shouldHideBackButton:(*BOOL)arg2 leftBarButtonItems:(*id)arg3 rightBarButtonItems:(*id)arg4 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif