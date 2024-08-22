// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESEMANTICDATE_H
#define HDCODABLESEMANTICDATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableSemanticDate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat date; // ivar: _date
@property (nonatomic) BOOL hasDate;
@property (readonly, nonatomic) BOOL hasKeyPath;
@property (retain, nonatomic) NSString *keyPath; // ivar: _keyPath


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