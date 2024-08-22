// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUINTERNALCONTEXTUPDATECONTEXTUPDATERESPONSE_H
#define SIRINLUINTERNALCONTEXTUPDATECONTEXTUPDATERESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSMutableArray *reformedTurnInputBundles; // ivar: _reformedTurnInputBundles
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reformedTurnInputBundlesAtIndex:(NSUInteger)arg0 ;
-(void)addReformedTurnInputBundles:(id)arg0 ;
-(void)clearReformedTurnInputBundles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif