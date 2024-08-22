// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKASYNCOPERATIONSTATE_H
#define PKASYNCOPERATIONSTATE_H

@class NSMutableArray, NSString;
@protocol PKCancelObservable;

#import <Foundation/Foundation.h>


@interface PKAsyncOperationState : NSObject <PKCancelObservable>

 {
    os_unfair_lock_s _actionLock;
    NSMutableArray *_cancelActions;
    os_unfair_lock_s _lock;
    BOOL _canceled;
    BOOL _invalidated;
}


@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_init;
-(id)init;
-(void)_cancel;
-(void)_invalidate;
-(void)addCancelAction:(id)arg0 ;
-(void)performAction:(id)arg0 ;


@end


#endif