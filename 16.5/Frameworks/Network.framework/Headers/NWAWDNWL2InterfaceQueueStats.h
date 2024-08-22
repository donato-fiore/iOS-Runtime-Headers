// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWAWDNWL2INTERFACEQUEUESTATS_H
#define NWAWDNWL2INTERFACEQUEUESTATS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWAWDNWL2InterfaceQueueStats : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger avgQueueDelay; // ivar: _avgQueueDelay
@property (nonatomic) BOOL hasAvgQueueDelay;
@property (readonly, nonatomic) BOOL hasInterfaceName;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasMaxQueueDelay;
@property (nonatomic) BOOL hasMinQueueDelay;
@property (nonatomic) BOOL hasSlot;
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) int interfaceType; // ivar: _interfaceType
@property (nonatomic) NSUInteger maxQueueDelay; // ivar: _maxQueueDelay
@property (nonatomic) NSUInteger minQueueDelay; // ivar: _minQueueDelay
@property (nonatomic) int slot; // ivar: _slot


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interfaceTypeAsString:(int)arg0 ;
-(id)slotAsString:(int)arg0 ;
-(int)StringAsInterfaceType:(id)arg0 ;
-(int)StringAsSlot:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif