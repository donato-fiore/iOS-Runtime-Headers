// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPBUNDLEID_H
#define CLPBUNDLEID_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPBundleId : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasShortKey;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *shortKey; // ivar: _shortKey
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


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