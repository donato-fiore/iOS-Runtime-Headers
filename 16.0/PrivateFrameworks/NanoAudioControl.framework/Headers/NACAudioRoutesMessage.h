// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NACAUDIOROUTESMESSAGE_H
#define NACAUDIOROUTESMESSAGE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface NACAudioRoutesMessage : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *audioRoutes; // ivar: _audioRoutes
@property (retain, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL hasCategory;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)audioRoutesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAudioRoutes:(id)arg0 ;
-(void)clearAudioRoutes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif