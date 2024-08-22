// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSUSAGERESPMSGBUNDLEUSAGE_H
#define NSSUSAGERESPMSGBUNDLEUSAGE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NSSUsageRespMsgBundleUsage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) NSMutableArray *categories; // ivar: _categories
@property (nonatomic) BOOL hasPurgeable;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL purgeable; // ivar: _purgeable


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCategories:(id)arg0 ;
-(void)clearCategories;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif