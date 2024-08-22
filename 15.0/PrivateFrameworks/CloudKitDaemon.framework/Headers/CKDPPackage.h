// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPPACKAGE_H
#define CKDPPACKAGE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CKDPAsset.h"

@interface CKDPPackage : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasManifest;
@property (retain, nonatomic) CKDPAsset *manifest; // ivar: _manifest
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sectionsAtIndex:(NSUInteger)arg0 ;
-(void)addSections:(id)arg0 ;
-(void)clearSections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif