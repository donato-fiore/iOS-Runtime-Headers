// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUIPOSTERLOCKVIEWCONTROLLER_H
#define PBUIPOSTERLOCKVIEWCONTROLLER_H

@class NSString;
@protocol PBUIPosterReplicaPortalProviding, UIScenePresenter;


#import "PBUIPosterVariantViewController.h"
#import "PBUIPosterFloatingView.h"
#import "PBUIPosterFloatingLayerReplica.h"

@interface PBUIPosterLockViewController : PBUIPosterVariantViewController <PBUIPosterReplicaPortalProviding>

 {
    unsigned int _floatingContextID;
    id<UIScenePresenter> *_floatingPresenter;
    PBUIPosterFloatingView *_realFloatingView;
    PBUIPosterFloatingLayerReplica *_floatingLayerStandIn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)areSettingsAppropriateForSnapshotting:(id)arg0 ;
-(BOOL)updatePresentation;
-(NSInteger)variant;
-(id)initWithScene:(id)arg0 cache:(id)arg1 ;
-(id)portalProviderForFloatingLayer;
-(id)portalSourceForReplicaView:(id)arg0 ;
-(id)registerPortalSourceObserver:(id)arg0 ;
-(void)_updateFloatingLayer;
-(void)invalidate;
-(void)legibilitySettingsDidChange;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif