// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSCENEOBSERVER_H
#define FBSCENEOBSERVER_H

@class NSString;
@protocol BSDescriptionProviding, FBSceneObserver, FBSceneDelegate;

#import <Foundation/Foundation.h>


@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneObserver, FBSceneDelegate>

 {
    NSUInteger _observerAddress;
    Class _observerClass;
    BOOL _isDelegate;
    ? _observerFlags;
    ? _delegateFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<FBSceneObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;


-(BOOL)isDelegate;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithObserver:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithObserver:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)scene:(id)arg0 clientDidConnect:(id)arg1 ;
-(void)scene:(id)arg0 didApplyUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didPrepareUpdateWithContext:(id)arg1 ;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)scene:(id)arg0 willUpdateSettings:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)sceneContentStateDidChange:(id)arg0 ;
-(void)sceneDidActivate:(id)arg0 ;
-(void)sceneDidDeactivate:(id)arg0 withError:(id)arg1 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sceneWillDeactivate:(id)arg0 withError:(id)arg1 ;


@end


#endif