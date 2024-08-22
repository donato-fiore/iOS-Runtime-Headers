// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOETAREQUESTEXTENSION_H
#define GEOETAREQUESTEXTENSION_H

@class PBCodable;
@protocol NSCopying;


#import "GEOTFTrafficSnapshot.h"

@interface GEOETARequestExtension : PBCodable <NSCopying>

 {
    GEOTFTrafficSnapshot *_trafficSnapshot;
    BOOL _needServerLatency;
    BOOL _useLiveTrafficAsFallback;
    ? _flags;
}


@property (nonatomic) BOOL hasNeedServerLatency;
@property (readonly, nonatomic) BOOL hasTrafficSnapshot;
@property (nonatomic) BOOL hasUseLiveTrafficAsFallback;
@property (nonatomic) BOOL needServerLatency;
@property (retain, nonatomic) GEOTFTrafficSnapshot *trafficSnapshot;
@property (nonatomic) BOOL useLiveTrafficAsFallback;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif