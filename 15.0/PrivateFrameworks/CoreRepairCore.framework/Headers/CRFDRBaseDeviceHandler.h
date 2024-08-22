// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRFDRBASEDEVICEHANDLER_H
#define CRFDRBASEDEVICEHANDLER_H

@class NSString, NSDictionary, NSData, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRFDRBaseDeviceHandler : NSObject

@property (retain, nonatomic) NSString *KBBSerialNumber; // ivar: _KBBSerialNumber
@property (retain, nonatomic) NSString *KGBSerialNumber; // ivar: _KGBSerialNumber
@property BOOL allowFactoryReset; // ivar: allowFactoryReset
@property (retain, nonatomic) NSDictionary *currentProperties; // ivar: currentProperties
@property BOOL isServicePart; // ivar: isServicePart
@property (retain, nonatomic) NSData *kbbCGSerialNumber; // ivar: _kbbCGSerialNumber
@property (retain, nonatomic) NSData *previousCGSerialNumber; // ivar: _previousCGSerialNumber
@property (retain, nonatomic) NSString *sealDate; // ivar: _sealDate
@property (retain, nonatomic) NSMutableArray *warnings; // ivar: warnings


+(BOOL)isFDRDataClassSupported:(id)arg0 ;
+(BOOL)isFDRPropertySupported:(id)arg0 ;
+(id)_getDataClassUsingComponentAuthName:(id)arg0 ;
+(id)_populateSealingMapForCurrentDevice;
+(id)_populateSealingMapProperties;
+(id)copySealingManifestDataInstanceForComponent:(id)arg0 ;
+(id)generateNewSealingMapFromOld:(id)arg0 ByRemove:(id)arg1 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
+(id)getPropertyArrayFrom:(id)arg0 ;
+(id)getRegisterChangeDictUsingComponentAuthName:(id)arg0 ;
+(id)getSealingMap;
+(void)initSealingMap;
-(BOOL)_addDataClassAndInstanceToMutableDictionary:(id)arg0 dataClass:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_addPropertyToMutableDictionary:(id)arg0 property:(id)arg1 withError:(*id)arg2 ;
-(BOOL)isTimeExpiredForPartsUnswapped:(NSInteger)arg0 ;
-(BOOL)storeWarningStrings:(id)arg0 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(BOOL)validateDisplaySwapped:(id)arg0 ;
-(CGFloat)timeIntervalSinceLastSealing;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(NSInteger)validatePartsSwapped:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getCurrentManifestDataClassesAndInstancesWithPartSPC:(id)arg0 fdr:(struct __AMFDR *)arg1 properties:(*id)arg2 fdrError:(*id)arg3 ;
-(id)getDataClassesAndInstancesOfKBBWith:(struct __AMFDR *)arg0 propertiesDict:(*id)arg1 fdrError:(*id)arg2 ;
-(id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makePropertiesDict:(*id)arg3 fdrError:(*id)arg4 ;
-(id)getSealDateFromSealingManifestData:(struct __CFData *)arg0 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)init;


@end


#endif