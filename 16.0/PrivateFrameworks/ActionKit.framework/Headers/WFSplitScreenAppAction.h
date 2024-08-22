// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSPLITSCREENAPPACTION_H
#define WFSPLITSCREENAPPACTION_H

@class WFAction, NSMutableDictionary;
@protocol OS_dispatch_queue;



@interface WFSplitScreenAppAction : WFAction

@property (retain, nonatomic) NSMutableDictionary *leftWindowsToWindowID; // ivar: _leftWindowsToWindowID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *rightWindowsToWindowID; // ivar: _rightWindowsToWindowID


-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif