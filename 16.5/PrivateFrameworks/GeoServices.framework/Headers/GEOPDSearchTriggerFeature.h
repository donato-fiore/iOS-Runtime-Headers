// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPDSEARCHTRIGGERFEATURE_H
#define GEOPDSEARCHTRIGGERFEATURE_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOPDSearchTriggerFeature : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _completionSourceTypes;
    NSString *_canonicalName;
    NSString *_displayName;
    NSString *_entityId;
    NSInteger _globalEntityPopularity;
    NSInteger _globalPopularity;
    CGFloat _lat;
    CGFloat _lng;
    NSInteger _localPopularity;
    NSInteger _localEntityPopularity;
    NSMutableArray *_prefCategorys;
    CGFloat _similarityScore;
    NSString *_trigger;
    CGFloat _w2vSimilarityScore;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _globalPmiScore;
    float _localPmiScore;
    int _tag;
    BOOL _isUseShowOnMapHighlightExtra;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif