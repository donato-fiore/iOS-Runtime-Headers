// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRFDRDISPLAY1DEVICEHANDLER_H
#define CRFDRDISPLAY1DEVICEHANDLER_H

@class NSString, NSDictionary;


#import "CRFDRBaseDeviceHandler.h"

@interface CRFDRDisplay1DeviceHandler : CRFDRBaseDeviceHandler {
    BOOL _allowFactoryReset;
}


@property (retain, nonatomic) NSString *KBBMLBSerialNumber; // ivar: KBBMLBSerialNumber
@property (retain, nonatomic) NSDictionary *KBBTransferProperties; // ivar: _KBBTransferProperties


+(BOOL)isDisplay1ProductType:(int)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
-(BOOL)allowFactoryReset;
-(BOOL)syncSysConfig:(id)arg0 key:(unsigned int)arg1 inBuffer:(id)arg2 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(NSInteger)mlbRepairChecks;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(void)setAllowFactoryReset:(BOOL)arg0 ;
-(void)setSealingMapForFactoryReset;


@end


#endif