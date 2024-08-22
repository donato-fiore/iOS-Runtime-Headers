// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACROUTINGCONTROLLERLOCAL_H
#define NACROUTINGCONTROLLERLOCAL_H

@class MPAVRoutingController, NSString, NSArray;
@protocol MPAVRoutingControllerDelegate, NACRoutingController, NACRoutingControllerDelegate;

#import <Foundation/Foundation.h>

#import "NACAudioRoute.h"

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController>

 {
    MPAVRoutingController *_routingController;
    NSString *_audioCategory;
}


@property (readonly, nonatomic) NSArray *availableAudioRoutes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACRoutingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NACAudioRoute *pickedRoute;
@property (readonly) Class superclass;


-(id)initWithAudioCategory:(id)arg0 ;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg0 ;
-(void)routingController:(id)arg0 didFailToPickRouteWithError:(id)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg0 ;


@end


#endif