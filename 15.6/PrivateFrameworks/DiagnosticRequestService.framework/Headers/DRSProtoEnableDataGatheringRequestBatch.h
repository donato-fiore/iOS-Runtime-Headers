// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSPROTOENABLEDATAGATHERINGREQUESTBATCH_H
#define DRSPROTOENABLEDATAGATHERINGREQUESTBATCH_H

@class PBCodable, NSMutableArray, NSString;
@protocol DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoClientDeviceMetadata.h"

@interface DRSProtoEnableDataGatheringRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying>



@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata; // ivar: _clientMetadata
@property (retain, nonatomic) NSMutableArray *dataGatheringRequests; // ivar: _dataGatheringRequests
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *requests;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataGatheringRequestsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(void)addDataGatheringRequests:(id)arg0 ;
-(void)clearDataGatheringRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif