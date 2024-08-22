// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPFEEDBACKTILEFEATUREINFO_H
#define GEORPFEEDBACKTILEFEATUREINFO_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEORPFeedbackTileFeatureInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_featureHandles;
    NSString *_featureName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *featureHandles;
@property (retain, nonatomic) NSString *featureName;
@property (readonly, nonatomic) BOOL hasFeatureName;


+(BOOL)isValid:(id)arg0 ;
+(Class)featureHandleType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)featureHandleAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addFeatureHandle:(id)arg0 ;
-(void)clearFeatureHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif