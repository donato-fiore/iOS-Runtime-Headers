// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYPROXYPATHWEIGHT_H
#define NSPPRIVACYPROXYPROXYPATHWEIGHT_H

@class PBCodable;
@protocol NSCopying;



@interface NSPPrivacyProxyProxyPathWeight : PBCodable <NSCopying>

 {
    ? _proxies;
}


@property (readonly, nonatomic) *unsigned int proxies;
@property (readonly, nonatomic) NSUInteger proxiesCount;
@property (nonatomic) unsigned int weight; // ivar: _weight


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)proxiesAtIndex:(NSUInteger)arg0 ;
-(void)addProxies:(unsigned int)arg0 ;
-(void)clearProxies;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif