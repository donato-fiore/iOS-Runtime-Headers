// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRGEN3DEVICEHANDLER_H
#define CRFDRGEN3DEVICEHANDLER_H

@class CRFDRBaseDeviceHandler;



@interface CRFDRGen3DeviceHandler : CRFDRBaseDeviceHandler



+(BOOL)isGen3ProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makeClasses:(*id)arg3 makeInstances:(*id)arg4 makePropertiesDict:(*id)arg5 fdrError:(*id)arg6 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(NSInteger)validateDisplaySwapped:(id)arg0 lessThan:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)spcInPartSPC:(id)arg0 withDataClass:(id)arg1 ;


@end


#endif