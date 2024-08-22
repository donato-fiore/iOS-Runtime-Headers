// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDPLACELOOKUPPARAMETERS_H
#define GEOPDPLACELOOKUPPARAMETERS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _muids;
    NSMutableArray *_identifiers;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _resultProviderId;
    BOOL _enablePartialClientization;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *identifiers;


+(Class)identifierType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)identifierAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 resultProviderID:(int)arg1 ;
-(id)jsonRepresentation;
-(void)addIdentifier:(id)arg0 ;
-(void)clearIdentifiers;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif