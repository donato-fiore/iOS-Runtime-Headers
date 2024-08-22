// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBINSTRUMENTCLUSTERROOTVIEWCONTROLLER_H
#define DBINSTRUMENTCLUSTERROOTVIEWCONTROLLER_H

@class UIViewController, NSString, CARDisplayInfo;
@protocol DBEnvironmentConfigurationObserving, BSInvalidatable, DBProcessMonitorObserving, DBEnvironment;


#import "DBInstrumentClusterAppSceneViewController.h"

@interface DBInstrumentClusterRootViewController : UIViewController <DBEnvironmentConfigurationObserving, BSInvalidatable, DBProcessMonitorObserving>



@property (retain, nonatomic) DBInstrumentClusterAppSceneViewController *appSceneViewController; // ivar: _appSceneViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CARDisplayInfo *displayInfo; // ivar: _displayInfo
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *targetBundleIdentifier; // ivar: _targetBundleIdentifier


-(id)initWithEnvironment:(id)arg0 ;
-(void)backgroundScene;
-(void)foregroundSceneWithURL:(id)arg0 ;
-(void)invalidate;
-(void)processMonitor:(id)arg0 didHandleDeathOfBundleIdentifier:(id)arg1 ;
-(void)processMonitor:(id)arg0 shouldHandleDeathOfBundleIdentifier:(id)arg1 isCrash:(BOOL)arg2 ;
-(void)updateSceneWithAnimationSettings:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif