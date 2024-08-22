// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTSCHEMATESTSESSIONINFO_H
#define SUTSCHEMATESTSESSIONINFO_H

@class NSString, NSData, NSArray;


#import "SISchemaInstrumentationMessage.h"

@interface SUTSchemaTestSessionInfo : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) NSString *cpuArchitecture; // ivar: _cpuArchitecture
@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (copy, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (nonatomic) BOOL hasBundleId; // ivar: _hasBundleId
@property (nonatomic) BOOL hasCpuArchitecture; // ivar: _hasCpuArchitecture
@property (nonatomic) BOOL hasDeviceName; // ivar: _hasDeviceName
@property (nonatomic) BOOL hasHardwareModel; // ivar: _hasHardwareModel
@property (nonatomic) BOOL hasIsSimulator;
@property (nonatomic) BOOL hasModelNumber; // ivar: _hasModelNumber
@property (nonatomic) BOOL hasProductType; // ivar: _hasProductType
@property (nonatomic) BOOL hasProductVersion; // ivar: _hasProductVersion
@property (nonatomic) BOOL hasSystemBuild; // ivar: _hasSystemBuild
@property (nonatomic) BOOL isSimulator; // ivar: _isSimulator
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (copy, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (copy, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (copy, nonatomic) NSArray *testSessionInfoItems; // ivar: _testSessionInfoItems


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)testSessionInfoItemCount;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)testSessionInfoItemAtIndex:(NSUInteger)arg0 ;
-(void)addTestSessionInfoItem:(id)arg0 ;
-(void)clearTestSessionInfoItem;
-(void)writeTo:(id)arg0 ;


@end


#endif