// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI15APPSTATEMONITOR_H
#define _TTC9SEYMOURUI15APPSTATEMONITOR_H

@class SwiftObject;



@interface _TtC9SeymourUI15AppStateMonitor : SwiftObject {
    ? monitor;
    ? eventHub;
}




-(void)publishAppAttentionGained;
-(void)publishAppAttentionLost;
-(void)publishAppDidBecomeActive;
-(void)publishAppDidEnterBackground;
-(void)publishAppWillEnterForeground;
-(void)publishAppWillResignActive;
-(void)publishAppWillTerminate;


@end


#endif