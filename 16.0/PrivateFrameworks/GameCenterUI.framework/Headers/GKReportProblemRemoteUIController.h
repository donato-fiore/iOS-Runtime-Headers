// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKREPORTPROBLEMREMOTEUICONTROLLER_H
#define GKREPORTPROBLEMREMOTEUICONTROLLER_H

@class GKPlayer, NSURL;


#import "GKRemoteUIController.h"

@interface GKReportProblemRemoteUIController : GKRemoteUIController

@property (retain, nonatomic) GKPlayer *problemPlayer; // ivar: _problemPlayer
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)controllerForProblemPlayer:(id)arg0 completionHandler:(id)arg1 ;
-(id)bagKey;
-(id)fallbackURL;
-(id)initWithProblemPlayer:(id)arg0 ;
-(id)postBodyForInitialLoad;
-(int)preferredLayoutStyle;


@end


#endif