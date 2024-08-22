// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSDOMAINBUNDLEIDPATTERNS_H
#define BCSDOMAINBUNDLEIDPATTERNS_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BCSDomainBundleIdPatterns : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *bundleIdPatterns; // ivar: _bundleIdPatterns
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIdPatternsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBundleIdPatterns:(id)arg0 ;
-(void)clearBundleIdPatterns;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif