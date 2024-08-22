// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NACROUTINGCONTROLLERPROXY_H
#define NACROUTINGCONTROLLERPROXY_H

@class NSString, NSArray;
@protocol NACRoutingController, NACRoutingControllerDelegate;

#import <Foundation/Foundation.h>

#import "NACXPCClient.h"
#import "NACAudioRoute.h"

@interface NACRoutingControllerProxy : NSObject <NACRoutingController>

 {
    NACXPCClient *_xpcClient;
    NSString *_category;
    BOOL _isObserving;
}


@property (readonly, nonatomic) NSArray *availableAudioRoutes; // ivar: _availableAudioRoutes
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACRoutingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NACAudioRoute *pickedRoute; // ivar: _pickedRoute
@property (readonly) Class superclass;


-(id)initWithAudioCategory:(id)arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_audioRoutesDidChange;
-(void)beginObservingRoutes;
-(void)dealloc;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg0 ;


@end


#endif