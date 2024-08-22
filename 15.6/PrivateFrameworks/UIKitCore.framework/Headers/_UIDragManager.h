// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDRAGMANAGER_H
#define _UIDRAGMANAGER_H

@class CAContext, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "UIScreen.h"

@interface _UIDragManager : NSObject {
    CAContext *_dragImageContext;
    NSInteger _pendingSessionRequests;
    NSMutableArray *_pendingSessionRequestsCompletionBlocks;
}


@property (readonly, nonatomic) CAContext *dragImageContext;
@property (copy, nonatomic) NSArray *dragSessionDestinations; // ivar: _dragSessionDestinations
@property (copy, nonatomic) NSArray *dragSessionSources; // ivar: _dragSessionSources
@property (readonly, weak, nonatomic) UIScreen *screen; // ivar: _screen


+(void)initializeDraggingSystem;
-(BOOL)hasPendingSessionRequests;
-(id)beginDragWithSessionConfiguration:(id)arg0 ;
-(id)dragDestinationWithEvent:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(id)sessionSourceWithIdentifier:(unsigned int)arg0 ;
-(unsigned int)uploadImage:(struct CGImage *)arg0 ;
-(void)_willAddDeactivationReason:(id)arg0 ;
-(void)deleteSlots:(id)arg0 ;
-(void)performAfterCompletingPendingSessionRequests:(id)arg0 ;
-(void)performPendingSessionCompletionBlocksIfPossible;
-(void)sessionDestinationDidEnd:(id)arg0 ;
-(void)sessionSourceDidEnd:(id)arg0 ;


@end


#endif