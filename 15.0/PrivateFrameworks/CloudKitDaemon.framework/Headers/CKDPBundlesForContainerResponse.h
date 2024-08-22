// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPBUNDLESFORCONTAINERRESPONSE_H
#define CKDPBUNDLESFORCONTAINERRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKDPBundlesForContainerResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *bundleIDs; // ivar: _bundleIDs


+(Class)bundleIDType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bundleIDAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBundleID:(id)arg0 ;
-(void)clearBundleIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif