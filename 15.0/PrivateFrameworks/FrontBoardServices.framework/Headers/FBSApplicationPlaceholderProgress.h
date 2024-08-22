// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSAPPLICATIONPLACEHOLDERPROGRESS_H
#define FBSAPPLICATIONPLACEHOLDERPROGRESS_H

@class NSProgress, NSString;
@protocol FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSApplicationPlaceholder.h"

@interface FBSApplicationPlaceholderProgress : NSObject <FBSApplicationPlaceholderProgress, BSInvalidatable, BSDescriptionProviding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
    int _invalidated;
    NSInteger _cancellationAllowed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger installPhase; // ivar: _installPhase
@property (readonly, nonatomic) NSUInteger installState; // ivar: _installState
@property (readonly, nonatomic) CGFloat percentComplete; // ivar: _percentComplete
@property (readonly, weak, nonatomic) FBSApplicationPlaceholder *placeholder; // ivar: _placeholder
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)_queue_updateFromProgress;
-(BOOL)queue_canPerformAction:(NSUInteger)arg0 ;
-(BOOL)queue_isCancellationAllowed;
-(BOOL)queue_isValid;
-(BOOL)queue_updateProxy:(id)arg0 ;
-(NSUInteger)queue_supportedActions;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithPlaceholder:(id)arg0 queue:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_startObservingProgress:(id)arg0 withContext:(*void)arg1 ;
-(void)_stopObservingProgress:(id)arg0 withContext:(*void)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif