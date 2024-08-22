// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDLIGHTPROFILENATURALLIGHTINGACTIONMODEL_H
#define HMDLIGHTPROFILENATURALLIGHTINGACTIONMODEL_H

@class NSUUID, NSNumber, NSSet;


#import "HMDActionModel.h"

@interface HMDLightProfileNaturalLightingActionModel : HMDActionModel

@property (retain) NSUUID *accessoryUUID;
@property (retain) NSUUID *lightProfileUUID;
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (retain) NSNumber *naturalLightingEnabledField;
@property (retain) NSSet *serviceUUIDs;


+(id)properties;
-(id)dependentUUIDs;


@end


#endif