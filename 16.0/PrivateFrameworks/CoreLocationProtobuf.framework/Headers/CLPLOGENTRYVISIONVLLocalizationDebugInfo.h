// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPLOGENTRYVISIONVLLOCALIZATIONDEBUGINFO_H
#define CLPLOGENTRYVISIONVLLOCALIZATIONDEBUGINFO_H

@class PBCodable;
@protocol NSCopying;


#import "CLPLOGENTRYVISIONVLLocalizationMaps488Details.h"

@interface CLPLOGENTRYVISIONVLLocalizationDebugInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasMaps488Details;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationMaps488Details *maps488Details; // ivar: _maps488Details


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