// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCSHAREDLISTENINGPLAYBACKINTENTDATASOURCE_H
#define MPCSHAREDLISTENINGPLAYBACKINTENTDATASOURCE_H

@class NSString, MSVBlockGuard, ICLiveLinkIdentity, MSVSectionedCollection, ICLiveLink, NSIndexPath;
@protocol ICLiveLinkDelegate, MPCPlaybackIntentDataSource;

#import <Foundation/Foundation.h>

#import "MPCPlaybackIntent.h"

@interface MPCSharedListeningPlaybackIntentDataSource : NSObject <ICLiveLinkDelegate, MPCPlaybackIntentDataSource>



@property (nonatomic) NSInteger buildState; // ivar: _buildState
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MSVBlockGuard *guard; // ivar: _guard
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICLiveLinkIdentity *identity; // ivar: _identity
@property (retain, nonatomic) MPCPlaybackIntent *initialIntent; // ivar: _initialIntent
@property (retain, nonatomic) MSVSectionedCollection *initialTracklist; // ivar: _initialTracklist
@property (nonatomic) NSInteger linkState; // ivar: _linkState
@property (retain, nonatomic) ICLiveLink *liveLink; // ivar: _liveLink
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) NSInteger shuffleMode; // ivar: _shuffleMode
@property (nonatomic) NSInteger sourceState; // ivar: _sourceState
@property (copy, nonatomic) NSIndexPath *startIndexPath; // ivar: _startIndexPath
@property (retain, nonatomic) id *strongSelf; // ivar: _strongSelf
@property (readonly) Class superclass;


-(void)_transitionToBuildState:(NSInteger)arg0 ;
-(void)_transitionToBuildState:(NSInteger)arg0 intent:(id)arg1 error:(id)arg2 ;
-(void)_transitionToLiveLinkState:(NSInteger)arg0 ;
-(void)_transitionToLiveLinkState:(NSInteger)arg0 error:(id)arg1 ;
-(void)_transitionToSourceState:(NSInteger)arg0 ;
-(void)_transitionToSourceState:(NSInteger)arg0 error:(id)arg1 ;
-(void)buildSharedSessionIntentWithIntent:(id)arg0 identity:(id)arg1 completion:(id)arg2 ;
-(void)didStartLiveLink:(id)arg0 ;
-(void)getPlaybackContextForIntent:(id)arg0 withCompletion:(id)arg1 ;
-(void)liveLink:(id)arg0 didEncounterError:(id)arg1 willRetry:(BOOL)arg2 ;
-(void)liveLink:(id)arg0 didUpdateQueue:(id)arg1 ;


@end


#endif