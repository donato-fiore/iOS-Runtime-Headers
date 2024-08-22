// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRFDRGEN3DEVICEHANDLER_H
#define CRFDRGEN3DEVICEHANDLER_H



#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRGen3DeviceHandler : CRFDRBaseDeviceHandler



+(BOOL)isGen3ProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(BOOL)validateDisplaySwapped:(id)arg0 ;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;


@end


#endif