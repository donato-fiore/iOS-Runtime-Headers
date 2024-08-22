// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLENOTIFICATIONSAMPLE_H
#define HKCODABLENOTIFICATIONSAMPLE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableMetadataDictionary.h"

@interface HKCodableNotificationSample : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger categoryValue; // ivar: _categoryValue
@property (nonatomic) NSInteger dataType; // ivar: _dataType
@property (nonatomic) CGFloat endDate; // ivar: _endDate
@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary; // ivar: _metadataDictionary
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (nonatomic) CGFloat startDate; // ivar: _startDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif