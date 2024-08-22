// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSHARINGBROADCASTTERMINAL_H
#define CATSHARINGBROADCASTTERMINAL_H

@protocol CATSharingBroadcastPrimitives, CATSharingBroadcastTerminalDelegate;

#import <Foundation/Foundation.h>

#import "CATOperationQueue.h"

@interface CATSharingBroadcastTerminal : NSObject {
    id<CATSharingBroadcastPrimitives> *mBroadcastPrimitive;
    id<CATSharingBroadcastTerminalDelegate> *mDelegate;
    CATOperationQueue *mDelegationQueue;
    BOOL mInvalidated;
    BOOL mIsDisplayingPIN;
}


@property (nonatomic, getter=isBroadcasting) BOOL broadcasting; // ivar: _broadcasting
@property (readonly, nonatomic) CATOperationQueue *delegationQueue; // ivar: _delegationQueue


-(id)initWithBroadcastPrimitives:(id)arg0 delegate:(id)arg1 delegationQueue:(id)arg2 ;
-(void)_activate;
-(void)_invalidateWithError:(id)arg0 removePrimitiveHandlers:(BOOL)arg1 deactivatePrimitives:(BOOL)arg2 ;
-(void)activate;
-(void)addPrimitiveHandlers;
-(void)invalidate;
-(void)removePrimitiveHandlers;
-(void)sessionHasPaired;
-(void)sessionNeedsToDisplayPin:(id)arg0 ;


@end


#endif