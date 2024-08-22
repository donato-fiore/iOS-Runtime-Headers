// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLOUDFAMILYANALYSISPETCLOUDFAMILYANALYSISEVENT_H
#define CLOUDFAMILYANALYSISPETCLOUDFAMILYANALYSISEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CloudFamilyAnalysisPETContactEvents.h"

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying>



@property (nonatomic) int batch; // ivar: _batch
@property (retain, nonatomic) NSString *collectionId; // ivar: _collectionId
@property (retain, nonatomic) CloudFamilyAnalysisPETContactEvents *contactEvents; // ivar: _contactEvents
@property (retain, nonatomic) NSString *sessionId; // ivar: _sessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif