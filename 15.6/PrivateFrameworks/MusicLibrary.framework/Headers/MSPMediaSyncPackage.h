// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMEDIASYNCPACKAGE_H
#define MSPMEDIASYNCPACKAGE_H

@class PBCodable;
@protocol NSCopying;


#import "MSPMediaSyncError.h"
#import "MSPMediaSyncHeader.h"
#import "MSPMediaSyncOperation.h"

@interface MSPMediaSyncPackage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MSPMediaSyncError *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasError;
@property (readonly, nonatomic) BOOL hasHeader;
@property (nonatomic) BOOL hasLastPackage;
@property (readonly, nonatomic) BOOL hasSyncOperation;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) MSPMediaSyncHeader *header; // ivar: _header
@property (nonatomic) BOOL lastPackage; // ivar: _lastPackage
@property (retain, nonatomic) MSPMediaSyncOperation *syncOperation; // ivar: _syncOperation
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif