// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RENOWPLAYINGRELEVANCEPROVIDERMANAGER_H
#define RENOWPLAYINGRELEVANCEPROVIDERMANAGER_H

@class MPRequestResponseController, NSString;
@protocol RENowPlayingRelevanceProviderManagerProperties, MPRequestResponseControllerDelegate;


#import "RERelevanceProviderManager.h"

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties, MPRequestResponseControllerDelegate>

 {
    NSUInteger _state;
    NSInteger _playbackState;
    MPRequestResponseController *_requestResponseController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger playbackState;
@property (readonly, nonatomic) MPRequestResponseController *requestResponseController;
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;


+(Class)_relevanceProviderClass;
+(id)_features;
-(id)_valueForProvider:(id)arg0 feature:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_handleRoutingControllerActiveSystemRouteDidChange:(id)arg0 ;
-(void)_updateActiveRoute;
-(void)_updatePlaybackState;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)pause;
-(void)resume;


@end


#endif