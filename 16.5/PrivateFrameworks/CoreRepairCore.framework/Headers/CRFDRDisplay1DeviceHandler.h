// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRFDRDISPLAY1DEVICEHANDLER_H
#define CRFDRDISPLAY1DEVICEHANDLER_H

@class NSString, NSDictionary;


#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRDisplay1DeviceHandler : CRFDRBaseDeviceHandler

@property (retain, nonatomic) NSString *KBBMLBSerialNumber; // ivar: KBBMLBSerialNumber
@property (retain, nonatomic) NSDictionary *KBBTransferProperties; // ivar: _KBBTransferProperties


+(BOOL)isDisplay1ProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makeClasses:(*id)arg3 makeInstances:(*id)arg4 makePropertiesDict:(*id)arg5 fdrError:(*id)arg6 ;
-(BOOL)syncSysConfig:(id)arg0 key:(unsigned int)arg1 inBuffer:(id)arg2 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(NSInteger)mlbRepairChecks;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 ;
-(id)getExcludedPropertiesForFactoryReset;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;


@end


#endif