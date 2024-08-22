// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLOUDFAMILYANALYSISPETCONTACTEVENTS_H
#define CLOUDFAMILYANALYSISPETCONTACTEVENTS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CloudFamilyAnalysisPETContactEvents : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *contactEvents; // ivar: _contactEvents


+(Class)contactEventType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactEventAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addContactEvent:(id)arg0 ;
-(void)clearContactEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif