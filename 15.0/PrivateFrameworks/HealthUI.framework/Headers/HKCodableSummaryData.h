// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKCODABLESUMMARYDATA_H
#define HKCODABLESUMMARYDATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "HKCodableQueryAnchor.h"

@interface HKCodableSummaryData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *contentData; // ivar: _contentData
@property (retain, nonatomic) HKCodableQueryAnchor *databaseChangesQueryAnchor; // ivar: _databaseChangesQueryAnchor
@property (readonly, nonatomic) BOOL hasContentData;
@property (readonly, nonatomic) BOOL hasDatabaseChangesQueryAnchor;
@property (readonly, nonatomic) BOOL hasKindRawValue;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (retain, nonatomic) NSString *kindRawValue; // ivar: _kindRawValue
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion


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