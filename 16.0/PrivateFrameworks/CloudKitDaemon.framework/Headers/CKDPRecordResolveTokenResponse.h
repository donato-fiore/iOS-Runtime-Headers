// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDRESOLVETOKENRESPONSE_H
#define CKDPRECORDRESOLVETOKENRESPONSE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "CKDPZone.h"
#import "CKDPShareMetadata.h"
#import "CKDPRecord.h"

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *container; // ivar: _container
@property (nonatomic) int containerEnvironment; // ivar: _containerEnvironment
@property (readonly, nonatomic) BOOL hasContainer;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (readonly, nonatomic) BOOL hasRecordZone;
@property (readonly, nonatomic) BOOL hasShareMetadata;
@property (readonly, nonatomic) BOOL hasShareRecord;
@property (retain, nonatomic) CKDPZone *recordZone; // ivar: _recordZone
@property (retain, nonatomic) NSMutableArray *records; // ivar: _records
@property (retain, nonatomic) CKDPShareMetadata *shareMetadata; // ivar: _shareMetadata
@property (retain, nonatomic) CKDPRecord *shareRecord; // ivar: _shareRecord


+(Class)recordType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerEnvironmentAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)recordAtIndex:(NSUInteger)arg0 ;
-(int)StringAsContainerEnvironment:(id)arg0 ;
-(void)addRecord:(id)arg0 ;
-(void)clearRecords;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif