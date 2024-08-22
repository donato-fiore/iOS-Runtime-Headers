// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKREMOTEUINAVIGATIONCONTROLLER_H
#define GKREMOTEUINAVIGATIONCONTROLLER_H

@class UINavigationController;


#import "GKRemoteUIController.h"

@interface GKRemoteUINavigationController : UINavigationController

@property (readonly, nonatomic) GKRemoteUIController *remoteUIController; // ivar: _remoteUIController


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithRemoteUIController:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif