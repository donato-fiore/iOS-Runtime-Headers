// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSABSTRACTSYSTEMSERVICE_H
#define SBSABSTRACTSYSTEMSERVICE_H



#import "SBSAbstractFacilityService.h"
#import "SBSSystemServiceClient.h"

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (readonly, nonatomic) SBSSystemServiceClient *client;


+(Class)serviceFacilityClientClass;


@end


#endif