// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETACTIONPERFORMER_H
#define PUASSETACTIONPERFORMER_H

@class NSArray, NSDictionary, UIViewController, NSUndoManager;
@protocol OS_os_log, PUAssetActionPerformerDelegate;

#import <Foundation/Foundation.h>


@interface PUAssetActionPerformer : NSObject {
    id *_completionHandler;
}


@property (weak, nonatomic) NSObject<OS_os_log> *actionPerformerLog; // ivar: _actionPerformerLog
@property (readonly, nonatomic) NSUInteger actionType; // ivar: _actionType
@property (readonly, copy, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, copy, nonatomic) NSDictionary *assetsByAssetCollection; // ivar: _assetsByAssetCollection
@property (weak, nonatomic) NSObject<PUAssetActionPerformerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIViewController *presentedViewController; // ivar: _presentedViewController
@property (nonatomic) NSUInteger sourceContext; // ivar: _sourceContext
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSUndoManager *undoManager;


-(BOOL)_requiresUnlockedDevice;
-(BOOL)dismissViewController:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)presentViewController:(id)arg0 ;
-(id)init;
-(id)initWithActionType:(NSUInteger)arg0 assets:(id)arg1 orAssetsByAssetCollection:(id)arg2 ;
-(void)_completeStateWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_completeUnlockTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleStepFinished:(NSUInteger)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_performUnlockIfNeeded;
-(void)_transitionToState:(NSUInteger)arg0 withSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)completeBackgroundTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;
-(void)performWithCompletionHandler:(id)arg0 ;
-(void)preheatUserInteractionTask;


@end


#endif