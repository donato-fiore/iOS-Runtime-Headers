// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETDISPLAYDESCRIPTORNAVIGATIONREQUEST_H
#define PUASSETDISPLAYDESCRIPTORNAVIGATIONREQUEST_H

@class NSTimer, NSString, NSDate;
@protocol PUBrowsingViewModelChangeObserver;

#import <Foundation/Foundation.h>

#import "PUAssetReference.h"
#import "PUBrowsingViewModel.h"

@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver>

 {
    NSTimer *_timeOutTimer;
    BOOL _hasSeenContentChange;
}


@property (nonatomic, setter=_setArrived:) BOOL _arrived; // ivar: __arrived
@property (retain, nonatomic, setter=_setFoundTargetAssetReference:) PUAssetReference *_foundTargetAssetReference; // ivar: __foundTargetAssetReference
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // ivar: __isPerformingChanges
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // ivar: __isUpdating
@property (nonatomic, setter=_setNeedsUpdateArrived:) BOOL _needsUpdateArrived; // ivar: __needsUpdateArrived
@property (nonatomic, setter=_setNeedsUpdateDone:) BOOL _needsUpdateDone; // ivar: __needsUpdateDone
@property (nonatomic, setter=_setNeedsUpdateFoundTargetAssetReference:) BOOL _needsUpdateFoundTargetAssetReference; // ivar: __needsUpdateFoundTargetAssetReference
@property (nonatomic, setter=_setSeeked:) BOOL _seeked; // ivar: __seeked
@property (nonatomic, setter=_setTimedOut:) BOOL _timedOut; // ivar: __timedOut
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUAssetReference *targetAssetReference; // ivar: _targetAssetReference
@property (retain, nonatomic) NSDate *targetModificationDate; // ivar: _targetModificationDate
@property (nonatomic) ? targetSeekTime; // ivar: _targetSeekTime
@property (nonatomic) CGFloat timeOut; // ivar: _timeOut
@property (retain, nonatomic) PUBrowsingViewModel *viewModel; // ivar: _viewModel


-(BOOL)_needsUpdate;
-(id)_infoMessage;
-(id)_navigationRequestError;
-(id)init;
-(void)_assertInsideChangeBlock;
-(void)_assertInsideUpdate;
-(void)_cleanUpWhenDone;
-(void)_finishRequest;
-(void)_invalidateArrived;
-(void)_invalidateDone;
-(void)_invalidateFoundTargetAssetReference;
-(void)_setNeedsUpdate;
-(void)_updateArrivedIfNeeded;
-(void)_updateCurrentAssetReference;
-(void)_updateDoneIfNeeded;
-(void)_updateFoundTargetAssetReferenceIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateSeeking;
-(void)dealloc;
-(void)performChanges:(id)arg0 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif