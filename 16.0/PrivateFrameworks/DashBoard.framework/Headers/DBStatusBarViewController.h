// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSTATUSBARVIEWCONTROLLER_H
#define DBSTATUSBARVIEWCONTROLLER_H

@class UIViewController, UIStatusBar_Modern;


#import "DBEnvironmentConfiguration.h"
#import "DBStatusBarStateProvider.h"

@interface DBStatusBarViewController : UIViewController

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (retain, nonatomic) DBStatusBarStateProvider *stateProvider; // ivar: _stateProvider
@property (retain, nonatomic) UIStatusBar_Modern *statusBarView; // ivar: _statusBarView


-(BOOL)hasActivePill;
-(id)initWithStateProvider:(id)arg0 environmentConfiguration:(id)arg1 ;
-(void)_createStatusBar;
-(void)dealloc;
-(void)statusBarEdgeUpdated;
-(void)viewDidLoad;


@end


#endif