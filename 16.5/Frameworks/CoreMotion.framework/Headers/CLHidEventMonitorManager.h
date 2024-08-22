// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLHIDEVENTMONITORMANAGER_H
#define CLHIDEVENTMONITORMANAGER_H



#import "CLHidEventManager.h"

@interface CLHidEventMonitorManager : CLHidEventManager



-(id)initWithDelegate:(id)arg0 queue:(id)arg1 matching:(id)arg2 ;
-(void)addSystemClientMatching:(id)arg0 ;
-(void)removeSystemClientmatching:(id)arg0 ;


@end


#endif