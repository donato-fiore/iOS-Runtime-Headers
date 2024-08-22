// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCODABLEHEALTHRECORDSSHARABLEVIEWMODEL_H
#define HKCODABLEHEALTHRECORDSSHARABLEVIEWMODEL_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HKCodableHealthRecordsEduContent.h"
#import "HKCodableHealthRecordsIndividualRecord.h"

@interface HKCodableHealthRecordsSharableViewModel : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *allRecords; // ivar: _allRecords
@property (nonatomic) NSInteger category; // ivar: _category
@property (retain, nonatomic) NSString *conceptIdentifier; // ivar: _conceptIdentifier
@property (retain, nonatomic) HKCodableHealthRecordsEduContent *eduContent; // ivar: _eduContent
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasConceptIdentifier;
@property (readonly, nonatomic) BOOL hasEduContent;
@property (nonatomic) BOOL hasIsPinned;
@property (readonly, nonatomic) BOOL hasLatestRecord;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasPreferredName;
@property (nonatomic) BOOL isPinned; // ivar: _isPinned
@property (retain, nonatomic) HKCodableHealthRecordsIndividualRecord *latestRecord; // ivar: _latestRecord
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) NSString *preferredName; // ivar: _preferredName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allRecordsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAllRecords:(id)arg0 ;
-(void)clearAllRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif