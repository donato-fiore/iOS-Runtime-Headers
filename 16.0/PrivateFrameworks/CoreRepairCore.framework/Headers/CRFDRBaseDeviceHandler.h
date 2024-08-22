// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRFDRBASEDEVICEHANDLER_H
#define CRFDRBASEDEVICEHANDLER_H

@class NSString, NSArray, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CRFDRBaseDeviceHandler : NSObject

@property (retain, nonatomic) NSString *KBBSerialNumber; // ivar: _KBBSerialNumber
@property (retain, nonatomic) NSString *KGBSerialNumber; // ivar: _KGBSerialNumber
@property BOOL allowFactoryReset; // ivar: allowFactoryReset
@property (retain, nonatomic) NSArray *currentDataClasses; // ivar: currentDataClasses
@property (retain, nonatomic) NSArray *currentDataInstances; // ivar: currentDataInstances
@property (retain, nonatomic) NSDictionary *currentProperties; // ivar: currentProperties
@property BOOL isServicePart; // ivar: isServicePart
@property (retain, nonatomic) NSString *kbbCGSN; // ivar: _kbbCGSN
@property (retain, nonatomic) NSString *kbbSealDate; // ivar: _kbbSealDate
@property (retain, nonatomic) NSString *previousCGSN; // ivar: _previousCGSN
@property (retain, nonatomic) NSString *sealDate; // ivar: _sealDate
@property (retain, nonatomic) NSMutableArray *warnings; // ivar: warnings


+(BOOL)isFDRDataClassSupported:(id)arg0 ;
+(BOOL)isFDRPropertySupported:(id)arg0 ;
+(id)_getDataClassUsingComponentAuthName:(id)arg0 ;
+(id)_populateSealingMapForCurrentDevice;
+(id)_populateSealingMapProperties;
+(id)copySealingManifestDataInstanceForComponent:(id)arg0 ;
+(id)getDeviceHandlerForProductType:(int)arg0 ;
+(id)getPropertyArrayFrom:(id)arg0 ;
+(id)getRegisterChangeDictUsingComponentAuthName:(id)arg0 ;
+(id)getSealingMap;
+(void)initSealingMap;
-(BOOL)_addDataClassAndInstanceToMutableDictionary:(id)arg0 dataClass:(id)arg1 withError:(*id)arg2 ;
-(BOOL)_addPropertyToMutableDictionary:(id)arg0 property:(id)arg1 withError:(*id)arg2 ;
-(BOOL)getMakeDataClassesAndInstancesWithPartSPC:(id)arg0 fdrRemote:(struct __AMFDR *)arg1 propertiesFromParam:(id)arg2 makeClasses:(*id)arg3 makeInstances:(*id)arg4 makePropertiesDict:(*id)arg5 fdrError:(*id)arg6 ;
-(BOOL)getMinimalManifestsClassesAndInstancesWithPartSPC:(id)arg0 fdr:(struct __AMFDR *)arg1 minimalSealingDataInstances:(*id)arg2 minimalSealedDataClasses:(*id)arg3 minimalSealedDataInstances:(*id)arg4 error:(*id)arg5 ;
-(BOOL)getPatchExpectedDataWithPartSPC:(id)arg0 expectedClasses:(*id)arg1 expectedInstances:(*id)arg2 expectedDicts:(*id)arg3 dataDirectory:(id)arg4 error:(*id)arg5 ;
-(BOOL)storeWarningStrings:(id)arg0 ;
-(BOOL)validateAndSetSerialNumbersUsingPartSPC:(id)arg0 KGBSerialNumber:(id)arg1 KBBSerialNumber:(id)arg2 withError:(*id)arg3 ;
-(BOOL)validatePatchWithPartSPC:(id)arg0 originalClasses:(id)arg1 originalInstances:(id)arg2 originalDicts:(id)arg3 ;
-(BOOL)validateSwappedForDays:(NSInteger)arg0 currentSN:(id)arg1 previousSN:(id)arg2 sealDate:(id)arg3 ;
-(CGFloat)timeIntervalSinceLastSealing:(id)arg0 ;
-(NSInteger)performPostSealingStage:(id)arg0 ;
-(NSInteger)validateDisplaySwapped:(id)arg0 lessThan:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)getCurrentManifestDataClassesAndInstancesWithPartSPC:(id)arg0 fdr:(struct __AMFDR *)arg1 currentClasses:(*id)arg2 currentInstances:(*id)arg3 currentProperties:(*id)arg4 fdrError:(*id)arg5 ;
-(id)getDataClassesAndInstancesOfKBBWith:(struct __AMFDR *)arg0 propertiesDict:(*id)arg1 fdrError:(*id)arg2 ;
-(id)getExcludedPropertiesForFactoryReset;
-(id)getSealDateFromSealingManifestData:(struct __CFData *)arg0 ;
-(id)getUpdateDataClassesAndInstancesWithPartSPC:(id)arg0 withError:(*id)arg1 ;
-(id)init;


@end


#endif