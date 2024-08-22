// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYRESOLVERINFO_H
#define NSPPRIVACYPROXYRESOLVERINFO_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NSPPrivacyProxyResolverInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *dohURL; // ivar: _dohURL
@property (readonly, nonatomic) BOOL hasDohURL;
@property (readonly, nonatomic) BOOL hasObliviousDoHConfig;
@property (nonatomic) BOOL hasWeight;
@property (retain, nonatomic) NSData *obliviousDoHConfig; // ivar: _obliviousDoHConfig
@property (nonatomic) unsigned int weight; // ivar: _weight


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