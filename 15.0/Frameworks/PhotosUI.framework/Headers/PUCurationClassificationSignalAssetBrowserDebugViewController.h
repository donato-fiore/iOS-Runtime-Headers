// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUCURATIONCLASSIFICATIONSIGNALASSETBROWSERDEBUGVIEWCONTROLLER_H
#define PUCURATIONCLASSIFICATIONSIGNALASSETBROWSERDEBUGVIEWCONTROLLER_H

@class NSString, NSDictionary, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;


#import "PUPhotosAlbumViewController.h"

@interface PUCurationClassificationSignalAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSString *_signalName;
    CGFloat _operatingPoint;
    CGFloat _highPrecisionOperatingPoint;
    CGFloat _highRecallOperatingPoint;
    NSDictionary *_signalConfidenceByAssetUUID;
    CGFloat _minimumValue;
    CGFloat _maximumValue;
    BOOL _sortsAscending;
    BOOL _showsVideos;
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
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
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
-(void)setSignalConfidenceByAssetUUID:(id)arg0 withSignalName:(id)arg1 operatingPoint:(CGFloat)arg2 highPrecisionOperatingPoint:(CGFloat)arg3 highRecallOperatingPoint:(CGFloat)arg4 ;
-(void)viewDidLoad;


@end


#endif