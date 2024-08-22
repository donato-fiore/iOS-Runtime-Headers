// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITMESSAGEHOMELOCATIONREPORT_H
#define AWDHOMEKITMESSAGEHOMELOCATIONREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "AWDHomeKitMessageLocation.h"

@interface AWDHomeKitMessageHomeLocationReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasNearestLOI;
@property (nonatomic) BOOL hasNumIterationToConverge;
@property (readonly, nonatomic) BOOL hasSelectedHomeLocation;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) AWDHomeKitMessageLocation *nearestLOI; // ivar: _nearestLOI
@property (nonatomic) unsigned int numIterationToConverge; // ivar: _numIterationToConverge
@property (retain, nonatomic) NSMutableArray *rawLocations; // ivar: _rawLocations
@property (retain, nonatomic) AWDHomeKitMessageLocation *selectedHomeLocation; // ivar: _selectedHomeLocation
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rawLocationsAtIndex:(NSUInteger)arg0 ;
-(void)addRawLocations:(id)arg0 ;
-(void)clearRawLocations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif