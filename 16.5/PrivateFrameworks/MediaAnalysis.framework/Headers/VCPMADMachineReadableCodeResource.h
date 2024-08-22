// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADMACHINEREADABLECODERESOURCE_H
#define VCPMADMACHINEREADABLECODERESOURCE_H



#import "VCPMADVisionResource.h"

@interface VCPMADMachineReadableCodeResource : VCPMADVisionResource



+(id)sharedResource;
-(NSInteger)activeCost;
-(NSInteger)inactiveCost;


@end


#endif