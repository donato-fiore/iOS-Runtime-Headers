// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLPACCESSORYMETA_H
#define CLPACCESSORYMETA_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CLPAccessoryMeta : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMake;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *make; // ivar: _make
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *version; // ivar: _version


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