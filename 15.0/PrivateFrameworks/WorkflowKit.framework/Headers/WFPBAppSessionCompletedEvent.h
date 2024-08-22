// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPBAPPSESSIONCOMPLETEDEVENT_H
#define WFPBAPPSESSIONCOMPLETEDEVENT_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface WFPBAppSessionCompletedEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *source; // ivar: _source


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