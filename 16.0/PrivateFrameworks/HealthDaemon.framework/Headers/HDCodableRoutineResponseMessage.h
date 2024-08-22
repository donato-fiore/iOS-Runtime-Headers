// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEROUTINERESPONSEMESSAGE_H
#define HDCODABLEROUTINERESPONSEMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableRoutineLocationResponse.h"
#import "HDCodableRoutinePredictedLocationsResponse.h"

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (retain, nonatomic) HDCodableRoutineLocationResponse *fetchLocationResponse; // ivar: _fetchLocationResponse
@property (retain, nonatomic) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse; // ivar: _fetchNextLocationResponse
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasFetchLocationResponse;
@property (readonly, nonatomic) BOOL hasFetchNextLocationResponse;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (nonatomic) BOOL hasRequestType;
@property (retain, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (nonatomic) int requestType; // ivar: _requestType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requestTypeAsString:(int)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif