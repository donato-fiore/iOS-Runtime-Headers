// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBMAPREGION_H
#define _SFPBMAPREGION_H

@class PBCodable, NSString, NSData;
@protocol _SFPBMapRegion, NSSecureCoding;



@interface _SFPBMapRegion : PBCodable <_SFPBMapRegion, NSSecureCoding>



@property (nonatomic) CGFloat altitudeInMeters; // ivar: _altitudeInMeters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat eastLng; // ivar: _eastLng
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat northLat; // ivar: _northLat
@property (nonatomic) CGFloat southLat; // ivar: _southLat
@property (readonly) Class superclass;
@property (nonatomic) CGFloat westLng; // ivar: _westLng


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif