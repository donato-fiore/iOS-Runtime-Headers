// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIPRESENTATIONSTATEPROVIDER_H
#define SIRIPRESENTATIONSTATEPROVIDER_H

@class SASPresentationState;
@protocol OS_dispatch_queue, SiriPresentationStateProviderDelegate;

#import <Foundation/Foundation.h>


@interface SiriPresentationStateProvider : NSObject {
    SASPresentationState *_presentationState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (weak, nonatomic) NSObject<SiriPresentationStateProviderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL shouldProvideUpdates; // ivar: _shouldProvideUpdates
@property (nonatomic) BOOL updatesAvailable; // ivar: _updatesAvailable


-(id)initWithSiriPresentationIdentifier:(NSInteger)arg0 delegate:(id)arg1 ;
-(void)_dispatchedDiffAndApplyMutatedStatus:(id)arg0 ;
-(void)_invokeOnDispatchQueue:(id)arg0 ;
-(void)_setupProviderForSiriPresentationIdentifier:(NSInteger)arg0 ;
-(void)barrierWithCompletion:(id)arg0 ;
-(void)beginProvidingPresentationStateUpdates;
-(void)stopProvidingPresentationStateUpdatesAndResendLastUpdateOnResumption:(BOOL)arg0 ;


@end


#endif