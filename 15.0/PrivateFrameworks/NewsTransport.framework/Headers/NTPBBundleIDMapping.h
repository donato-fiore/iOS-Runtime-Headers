// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBBUNDLEIDMAPPING_H
#define NTPBBUNDLEIDMAPPING_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface NTPBBundleIDMapping : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *bundleIds; // ivar: _bundleIds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIdsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBundleIds:(id)arg0 ;
-(void)clearBundleIds;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif