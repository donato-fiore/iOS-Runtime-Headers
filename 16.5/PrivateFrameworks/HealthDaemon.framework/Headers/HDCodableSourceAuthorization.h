// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLESOURCEAUTHORIZATION_H
#define HDCODABLESOURCEAUTHORIZATION_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;


#import "HDCodableSource.h"

@interface HDCodableSourceAuthorization : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *authorizations; // ivar: _authorizations
@property (retain, nonatomic) NSData *backupUUID; // ivar: _backupUUID
@property (readonly, nonatomic) BOOL hasBackupUUID;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) HDCodableSource *source; // ivar: _source
@property (retain, nonatomic) NSData *sourceUUID; // ivar: _sourceUUID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)authorizationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedBackupUUID;
-(id)decodedSourceUUID;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAuthorizations:(id)arg0 ;
-(void)clearAuthorizations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif