// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPBTRANSITINCIDENTENTITY_H
#define GEOPBTRANSITINCIDENTENTITY_H

@class PBCodable, PBUnknownFields, NSString, NSSet;
@protocol GEOTransitIncidentEntity, NSCopying;


#import "GEOPBTransitIncidentEntityFilter.h"

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying>

 {
    PBUnknownFields *_unknownFields;
    NSUInteger _affectedMuid;
    GEOPBTransitIncidentEntityFilter *_filter;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasNextStopIDs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif