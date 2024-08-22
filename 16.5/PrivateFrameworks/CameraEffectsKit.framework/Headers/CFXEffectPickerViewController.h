// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXEFFECTPICKERVIEWCONTROLLER_H
#define CFXEFFECTPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UIImage;
@protocol CFXEffectPickerViewDelegate, CFXEffectPickerViewDataSource, CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate, FunCamFilterPickerPresentationDelegate, CFXEffectPickerViewControllerDelegate, OS_dispatch_queue;


#import "CFXEffectType.h"
#import "CFXEffectPickerView.h"

@interface CFXEffectPickerViewController : UIViewController <CFXEffectPickerViewDelegate, CFXEffectPickerViewDataSource, CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate, FunCamFilterPickerPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXEffectPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *effectLoadingQueue; // ivar: _effectLoadingQueue
@property (retain, nonatomic) CFXEffectType *effectType; // ivar: _effectType
@property (retain, nonatomic) NSArray *effects; // ivar: _effects
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CFXEffectPickerView *pickerView; // ivar: _pickerView
@property (retain, nonatomic) UIImage *previewBackgroundImage; // ivar: _previewBackgroundImage
@property (nonatomic, getter=isPreviewing) BOOL previewing; // ivar: _previewing
@property (readonly) Class superclass;


+(id)effectPickerViewController;
-(BOOL)shouldDisplayExpandedModeForFilterPickerView:(id)arg0 ;
-(BOOL)shouldRotateCellsForDeviceOrientation;
-(NSUInteger)CFX_indexForEffectIdentifier:(id)arg0 ;
-(NSUInteger)effectPickerView:(id)arg0 indexForEffectID:(id)arg1 ;
-(NSUInteger)numberOfEffectsInPickerView:(id)arg0 ;
-(NSUInteger)selectedFilterIndexForFilterPickerView:(id)arg0 ;
-(id)CFX_createPickerViewForEffectType:(id)arg0 ;
-(id)effectPickerView:(id)arg0 effectAtIndex:(NSInteger)arg1 ;
-(id)effectPickerView:(id)arg0 effectIdentifierAtIndex:(NSInteger)arg1 ;
-(id)effectPickerView:(id)arg0 effectTitleAtIndex:(NSInteger)arg1 ;
-(void)CFX_configureEffect:(id)arg0 previewSizeInPixels:(struct CGSize )arg1 ;
-(void)CFX_loadEffectsForType:(id)arg0 completion:(id)arg1 ;
-(void)CFX_restartPreviewing;
-(void)CFX_stopPreviewing;
-(void)effectPickerView:(id)arg0 didPickEffectAtIndex:(NSInteger)arg1 ;
-(void)effectPickerView:(id)arg0 effectAtIndex:(NSInteger)arg1 forPreviewingAtSizeInPixels:(struct CGSize )arg2 completionBlock:(id)arg3 ;
-(void)effectPickerViewDidScroll:(id)arg0 ;
-(void)filterPickerPresentationModeDidChange;
-(void)startPreviewing;
-(void)stopPreviewing;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif