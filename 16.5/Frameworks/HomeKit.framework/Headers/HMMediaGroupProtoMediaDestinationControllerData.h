// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMEDIAGROUPPROTOMEDIADESTINATIONCONTROLLERDATA_H
#define HMMEDIAGROUPPROTOMEDIADESTINATIONCONTROLLERDATA_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface HMMediaGroupProtoMediaDestinationControllerData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *availableDestinations; // ivar: _availableDestinations
@property (retain, nonatomic) NSString *destinationIdentifier; // ivar: _destinationIdentifier
@property (readonly, nonatomic) BOOL hasDestinationIdentifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (nonatomic) BOOL hasSupportedOptions;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *parentIdentifier; // ivar: _parentIdentifier
@property (nonatomic) NSUInteger supportedOptions; // ivar: _supportedOptions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)availableDestinationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAvailableDestinations:(id)arg0 ;
-(void)clearAvailableDestinations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif