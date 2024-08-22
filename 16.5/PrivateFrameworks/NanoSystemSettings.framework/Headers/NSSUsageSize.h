// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSAGESIZE_H
#define NSSUSAGESIZE_H

@class PBCodable;
@protocol NSCopying;



@interface NSSUsageSize : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger docsAndData; // ivar: _docsAndData
@property (nonatomic) NSUInteger fixed; // ivar: _fixed
@property (nonatomic) BOOL hasDocsAndData;
@property (nonatomic) BOOL hasFixed;
@property (nonatomic) BOOL hasPurgeable;
@property (nonatomic) NSUInteger purgeable; // ivar: _purgeable


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