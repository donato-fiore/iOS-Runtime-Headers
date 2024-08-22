// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRFDRGEN1DEVICEHANDLER_H
#define CRFDRGEN1DEVICEHANDLER_H



#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRGen1DeviceHandler : CRFDRBaseDeviceHandler



+(BOOL)isD3xProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makeClasses:(*id)arg3 makeInstances:(*id)arg4 makePropertiesDict:(*id)arg5 fdrError:(*id)arg6 ;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;


@end


#endif