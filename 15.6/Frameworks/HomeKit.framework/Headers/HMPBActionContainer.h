// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPBACTIONCONTAINER_H
#define HMPBACTIONCONTAINER_H

@class PBCodable;
@protocol NSCopying;


#import "HMPBCharacteristicWriteAction.h"
#import "HMPBMediaPlaybackAction.h"
#import "HMPBNaturalLightingAction.h"

@interface HMPBActionContainer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HMPBCharacteristicWriteAction *characteristicWriteAction; // ivar: _characteristicWriteAction
@property (readonly, nonatomic) BOOL hasCharacteristicWriteAction;
@property (readonly, nonatomic) BOOL hasMediaPlaybackAction;
@property (readonly, nonatomic) BOOL hasNaturalLightingAction;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) HMPBMediaPlaybackAction *mediaPlaybackAction; // ivar: _mediaPlaybackAction
@property (retain, nonatomic) HMPBNaturalLightingAction *naturalLightingAction; // ivar: _naturalLightingAction
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif