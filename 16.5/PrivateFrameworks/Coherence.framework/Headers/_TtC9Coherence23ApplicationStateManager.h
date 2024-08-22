// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COHERENCE23APPLICATIONSTATEMANAGER_H
#define _TTC9COHERENCE23APPLICATIONSTATEMANAGER_H

@class SwiftObject;



@interface _TtC9Coherence23ApplicationStateManager : SwiftObject {
    ? _isInBackground;
    ? accessQueue;
}




-(void)didEnterBackground;
-(void)willEnterForeground;


@end


#endif