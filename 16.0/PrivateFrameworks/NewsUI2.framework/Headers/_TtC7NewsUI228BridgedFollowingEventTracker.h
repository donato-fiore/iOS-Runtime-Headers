// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI228BRIDGEDFOLLOWINGEVENTTRACKER_H
#define _TTC7NEWSUI228BRIDGEDFOLLOWINGEVENTTRACKER_H

@class SwiftObject;
@protocol TSFollowingEventTracker;



@interface _TtC7NewsUI228BridgedFollowingEventTracker : SwiftObject <TSFollowingEventTracker>

 {
    ? tracker;
    ? didComplete;
    ? $__lazy_storage_$_viewSessionId;
}




-(void)followingBrowserDidCompleteWith:(NSInteger)arg0 ;
-(void)followingBrowserDidTapOnItemWithTag:(id)arg0 selected:(BOOL)arg1 sceneType:(NSInteger)arg2 ;


@end


#endif