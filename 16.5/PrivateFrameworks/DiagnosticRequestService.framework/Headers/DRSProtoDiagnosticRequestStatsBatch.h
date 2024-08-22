// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSPROTODIAGNOSTICREQUESTSTATSBATCH_H
#define DRSPROTODIAGNOSTICREQUESTSTATSBATCH_H

@class PBCodable, NSString, NSMutableArray;
@protocol CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoClientDeviceMetadata.h"

@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>



@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata; // ivar: _clientMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *requestsResultsStats; // ivar: _requestsResultsStats
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)requestsResultsStatsAtIndex:(NSUInteger)arg0 ;
-(void)addRequestsResultsStats:(id)arg0 ;
-(void)clearRequestsResultsStats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif