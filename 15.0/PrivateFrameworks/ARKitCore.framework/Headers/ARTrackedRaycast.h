// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARTRACKEDRAYCAST_H
#define ARTRACKEDRAYCAST_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "ARWorldTrackingTechnique.h"
#import "ARRaycastQuery.h"

@interface ARTrackedRaycast : NSObject

@property (weak, nonatomic) ARWorldTrackingTechnique *attachedWorldTrackingTechnique; // ivar: _attachedWorldTrackingTechnique
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain) ARRaycastQuery *trackedQuery; // ivar: _trackedQuery
@property (readonly, copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)description;
-(id)initWithIdentifier:(id)arg0 ray:(id)arg1 worldTrackingTechnique:(id)arg2 updateHandler:(id)arg3 ;
-(id)query;
-(void)stopTracking;


@end


#endif