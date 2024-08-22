// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCEXTERNALPLAYBACKCONTROLLERIMPLEMENTATION_H
#define MPCEXTERNALPLAYBACKCONTROLLERIMPLEMENTATION_H

@class NSString, MPAVRoutingController;
@protocol MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter;

#import <Foundation/Foundation.h>

#import "MPCPlaybackEngine.h"
#import "MPCMediaFoundationTranslator.h"

@interface MPCExternalPlaybackControllerImplementation : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // ivar: _playbackEngine
@property (readonly, nonatomic) MPAVRoutingController *routingController; // ivar: _routingController
@property (readonly) Class superclass;
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator; // ivar: _translator


-(BOOL)isExternalPlaybackAllowedForItem:(id)arg0 ;
-(BOOL)playerShouldUseAudiOnlyMode:(id)arg0 item:(id)arg1 externalScreenType:(NSInteger)arg2 ;
-(NSInteger)exernalPlaybackRouteRestrictionForItem:(id)arg0 route:(id)arg1 isScreenMirroringActive:(BOOL)arg2 ;
-(id)initWithPlaybackEngine:(id)arg0 translator:(id)arg1 ;
-(void)configureExternalPlaybackForPlayer:(id)arg0 queueItem:(id)arg1 ;
-(void)pickBestDeviceRoute;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg0 ;


@end


#endif