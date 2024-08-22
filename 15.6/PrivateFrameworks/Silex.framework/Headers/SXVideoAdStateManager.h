// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXVIDEOADSTATEMANAGER_H
#define SXVIDEOADSTATEMANAGER_H

@class NSString, NFStateMachine;
@protocol SXVideoAdStateProviding, SXVideoAdStateReporting;

#import <Foundation/Foundation.h>


@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic, setter=onFail:) id *onFailBlock; // ivar: onFailBlock
@property (copy, nonatomic, setter=onFinish:) id *onFinishBlock; // ivar: onFinishBlock
@property (copy, nonatomic, setter=onLearnMore:) id *onLearnMoreBlock; // ivar: onLearnMoreBlock
@property (copy, nonatomic, setter=onPause:) id *onPauseBlock; // ivar: onPauseBlock
@property (copy, nonatomic, setter=onPlay:) id *onPlayBlock; // ivar: onPlayBlock
@property (copy, nonatomic, setter=onResume:) id *onResumeBlock; // ivar: onResumeBlock
@property (copy, nonatomic, setter=onSkip:) id *onSkipBlock; // ivar: onSkipBlock
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;


-(id)init;
-(void)failWithError:(id)arg0 ;
-(void)finish;
-(void)learnMore;
-(void)onFail:(id)arg0 ;
-(void)onFinish:(id)arg0 ;
-(void)onLearnMore:(id)arg0 ;
-(void)onPause:(id)arg0 ;
-(void)onPlay:(id)arg0 ;
-(void)onResume:(id)arg0 ;
-(void)onSkip:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)resume;
-(void)skip;


@end


#endif