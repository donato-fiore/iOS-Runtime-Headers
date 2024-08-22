// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWCONTAINERVIEWCONTROLLER_H
#define SWCONTAINERVIEWCONTROLLER_H

@class UIViewController;
@protocol SWConfigurationManager, SWErrorProvider, SWInteractionProvider, SWPresentationManager, SWScaleManager, SWSnapshotManager;


#import "SWDeveloperSettings.h"
#import "SWViewController.h"

@interface SWContainerViewController : UIViewController

@property (readonly, nonatomic) NSObject<SWConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (retain, nonatomic) SWDeveloperSettings *developerSettings; // ivar: _developerSettings
@property (readonly, nonatomic) NSObject<SWErrorProvider> *errorProvider; // ivar: _errorProvider
@property (readonly, nonatomic) NSObject<SWInteractionProvider> *interactionProvider; // ivar: _interactionProvider
@property (readonly, nonatomic) NSObject<SWPresentationManager> *presentationManager; // ivar: _presentationManager
@property (readonly, nonatomic) NSObject<SWScaleManager> *scaleManager; // ivar: _scaleManager
@property (readonly, nonatomic) NSObject<SWSnapshotManager> *snapshotManager; // ivar: _snapshotManager
@property (readonly, nonatomic) SWViewController *webContentViewController; // ivar: _webContentViewController


-(BOOL)allowUserInteractionForInteractionType:(NSUInteger)arg0 ;
-(id)accessibilityElements;
-(id)initWithWebContentViewController:(id)arg0 interactionProvider:(id)arg1 errorProvider:(id)arg2 configurationManager:(id)arg3 presentationManager:(id)arg4 scaleManager:(id)arg5 snapshotManager:(id)arg6 ;
-(void)loadHTMLString:(id)arg0 baseURL:(id)arg1 ;
-(void)loadURL:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif