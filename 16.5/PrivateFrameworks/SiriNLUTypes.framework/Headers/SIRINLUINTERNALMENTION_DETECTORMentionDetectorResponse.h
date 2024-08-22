// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUINTERNALMENTION_DETECTORMENTIONDETECTORRESPONSE_H
#define SIRINLUINTERNALMENTION_DETECTORMENTIONDETECTORRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "SIRINLUEXTERNALUUID.h"

@interface SIRINLUINTERNALMENTION_DETECTORMentionDetectorResponse : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSMutableArray *mentions; // ivar: _mentions
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId; // ivar: _requestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)mentionsAtIndex:(NSUInteger)arg0 ;
-(void)addMentions:(id)arg0 ;
-(void)clearMentions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif