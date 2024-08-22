// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICIAMIMAGE_H
#define ICIAMIMAGE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ICIAMImage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHeight;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasURL;
@property (nonatomic) BOOL hasWidth;
@property (nonatomic) unsigned int height; // ivar: _height
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *uRL; // ivar: _uRL
@property (nonatomic) unsigned int width; // ivar: _width


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