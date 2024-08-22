// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPDEVICEINFO_H
#define C2MPDEVICEINFO_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface C2MPDeviceInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsAppleInternal;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (readonly, nonatomic) BOOL hasProcessUuid;
@property (readonly, nonatomic) BOOL hasProcessVersion;
@property (readonly, nonatomic) BOOL hasProductBuild;
@property (readonly, nonatomic) BOOL hasProductName;
@property (readonly, nonatomic) BOOL hasProductType;
@property (readonly, nonatomic) BOOL hasProductVersion;
@property (readonly, nonatomic) BOOL hasUserDefaultTestName;
@property (retain, nonatomic) NSMutableArray *internalTestConfigs; // ivar: _internalTestConfigs
@property (nonatomic) BOOL isAppleInternal; // ivar: _isAppleInternal
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSString *processUuid; // ivar: _processUuid
@property (retain, nonatomic) NSString *processVersion; // ivar: _processVersion
@property (retain, nonatomic) NSString *productBuild; // ivar: _productBuild
@property (retain, nonatomic) NSString *productName; // ivar: _productName
@property (retain, nonatomic) NSString *productType; // ivar: _productType
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *userDefaultTestName; // ivar: _userDefaultTestName


+(Class)internalTestConfigType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)internalTestConfigAtIndex:(NSUInteger)arg0 ;
-(void)addInternalTestConfig:(id)arg0 ;
-(void)clearInternalTestConfigs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif