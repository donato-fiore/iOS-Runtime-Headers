// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCOMPLICATIONCONTAINERVIEWCONTROLLER_H
#define CSCOMPLICATIONCONTAINERVIEWCONTROLLER_H

@class NSMutableDictionary, NSString, UIColor, BSUIVibrancyConfiguration, NSArray;
@protocol CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding, CSComplicationContainerViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"
#import "CSComplicationManager.h"

@interface CSComplicationContainerViewController : CSCoverSheetViewControllerBase <CHUISWidgetHostViewControllerDelegate, SBFBacklightSceneHostEnvironmentProviding>



@property (retain, nonatomic) NSMutableDictionary *cancelTouchesAssertionsByUniqueIdentifier; // ivar: _cancelTouchesAssertionsByUniqueIdentifier
@property (retain, nonatomic) CSComplicationManager *complicationManager; // ivar: _complicationManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSComplicationContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLandscape; // ivar: _isLandscape
@property (nonatomic) BOOL screenOff; // ivar: _screenOff
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration
@property (retain, nonatomic) NSArray *widgetDescriptors; // ivar: _widgetDescriptors
@property (retain, nonatomic) NSMutableDictionary *widgetViewControllersByUniqueIdentifier; // ivar: _widgetViewControllersByUniqueIdentifier


-(BOOL)_canShowWhileLocked;
-(BOOL)interpretsViewAsContent:(id)arg0 ;
-(id)_hostViewControllerForComplicationDescriptor:(id)arg0 ;
-(id)_inlineComplicationDescriptorIfSolo;
-(id)_widgetTintParameters;
-(id)initWithComplicationManager:(id)arg0 forLandscapeOrientation:(BOOL)arg1 ;
-(id)sceneHostEnvironmentEntriesForBacklightSession;
-(void)_layoutInlineComplication;
-(void)_layoutModularComplications;
-(void)_setTextParametersAndFontForWidgetController:(id)arg0 ;
-(void)_setWidgetViewControllersToPresentationMode:(NSUInteger)arg0 ;
-(void)beginCancellingTouches;
-(void)endCancellingTouches;
-(void)handleComplicationSelectionGesture:(id)arg0 ;
-(void)setVisible:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)widgetHostViewController:(id)arg0 requestsLaunchWithAction:(id)arg1 ;


@end


#endif