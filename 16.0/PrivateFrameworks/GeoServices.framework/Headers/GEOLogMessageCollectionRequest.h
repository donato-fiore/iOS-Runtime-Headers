// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMESSAGECOLLECTIONREQUEST_H
#define GEOLOGMESSAGECOLLECTIONREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;



@interface GEOLogMessageCollectionRequest : PBRequest <NSCopying>

 {
    NSMutableArray *_logMessages;
}


@property (retain, nonatomic) NSMutableArray *logMessages;


+(BOOL)isValid:(id)arg0 ;
+(Class)logMessageType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)logMessageAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addLogMessage:(id)arg0 ;
-(void)clearLogMessages;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif