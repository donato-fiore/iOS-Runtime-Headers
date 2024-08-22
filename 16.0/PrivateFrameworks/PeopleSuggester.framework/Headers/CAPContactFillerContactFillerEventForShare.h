// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAPCONTACTFILLERCONTACTFILLEREVENTFORSHARE_H
#define CAPCONTACTFILLERCONTACTFILLEREVENTFORSHARE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (retain, nonatomic) NSMutableArray *shareEvents; // ivar: _shareEvents


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)shareEventsAtIndex:(NSUInteger)arg0 ;
-(void)addShareEvents:(id)arg0 ;
-(void)clearShareEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif