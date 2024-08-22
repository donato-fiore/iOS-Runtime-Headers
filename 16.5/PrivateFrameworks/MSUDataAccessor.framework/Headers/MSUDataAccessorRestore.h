// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSUDATAACCESSORRESTORE_H
#define MSUDATAACCESSORRESTORE_H



#import "MSUDataAccessor.h"

@interface MSUDataAccessorRestore : MSUDataAccessor



-(id)copyMountPointForVolumeType:(int)arg0 error:(*id)arg1 ;
-(id)copyPathForPersonalizedData:(int)arg0 error:(*id)arg1 ;
-(id)findVolumesWithRole:(int)arg0 ;
-(id)getVolumeWithUUID:(id)arg0 ;
-(id)specialCaseAPTicketForRamdiskWithError:(*id)arg0 ;


@end


#endif