// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRFDRGEN1DEVICEHANDLER_H
#define CRFDRGEN1DEVICEHANDLER_H



#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRGen1DeviceHandler : CRFDRBaseDeviceHandler



+(BOOL)isD3xProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;


@end


#endif