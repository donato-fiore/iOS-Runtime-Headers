// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGM2EVENTINBANNER_H
#define SGM2EVENTINBANNER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface SGM2EventInBanner : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int app; // ivar: _app
@property (nonatomic) int category; // ivar: _category
@property (nonatomic) int extracted; // ivar: _extracted
@property (nonatomic) BOOL hasApp;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) BOOL hasExtracted;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasState;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) int state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appAsString:(int)arg0 ;
-(id)categoryAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)extractedAsString:(int)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsApp:(id)arg0 ;
-(int)StringAsCategory:(id)arg0 ;
-(int)StringAsExtracted:(id)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif