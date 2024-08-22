// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCSBUNDLEIDPATTERNS_H
#define BCSBUNDLEIDPATTERNS_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BCSBundleIdPatterns : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSMutableArray *urlPatterns; // ivar: _urlPatterns


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)urlPatternsAtIndex:(NSUInteger)arg0 ;
-(void)addUrlPatterns:(id)arg0 ;
-(void)clearUrlPatterns;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif