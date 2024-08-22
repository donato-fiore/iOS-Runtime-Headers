// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARENVIRONMENTPROBEUPDATE_H
#define ARENVIRONMENTPROBEUPDATE_H

@class NSArray, NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "AREnvironmentProbeManager.h"

@interface AREnvironmentProbeUpdate : NSObject <ARResultData>



@property (retain, nonatomic) NSArray *addedProbeAnchors; // ivar: _addedProbeAnchors
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) AREnvironmentProbeManager *manager; // ivar: _manager
@property (retain, nonatomic) NSArray *removedProbeAnchors; // ivar: _removedProbeAnchors
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *updatedProbeAnchors; // ivar: _updatedProbeAnchors


-(id)anchorsForCameraWithTransform:(struct ? )arg0 referenceOriginTransform:(struct ? )arg1 existingAnchors:(id)arg2 anchorsToRemove:(id)arg3 ;


@end


#endif