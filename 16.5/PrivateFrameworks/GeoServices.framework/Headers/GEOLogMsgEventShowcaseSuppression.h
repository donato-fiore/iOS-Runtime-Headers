// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTSHOWCASESUPPRESSION_H
#define GEOLOGMSGEVENTSHOWCASESUPPRESSION_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventShowcaseSuppression : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_adamId;
    NSUInteger _businessId;
    NSString *_showcaseId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _localSearchProviderID;
    int _suppressionReason;
    ? _flags;
}


@property (retain, nonatomic) NSString *adamId;
@property (nonatomic) NSUInteger businessId;
@property (readonly, nonatomic) BOOL hasAdamId;
@property (nonatomic) BOOL hasBusinessId;
@property (nonatomic) BOOL hasLocalSearchProviderID;
@property (readonly, nonatomic) BOOL hasShowcaseId;
@property (nonatomic) BOOL hasSuppressionReason;
@property (nonatomic) int localSearchProviderID;
@property (retain, nonatomic) NSString *showcaseId;
@property (nonatomic) int suppressionReason;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)suppressionReasonAsString:(int)arg0 ;
-(int)StringAsSuppressionReason:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif