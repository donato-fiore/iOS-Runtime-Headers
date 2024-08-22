// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DRSPROTODIAGNOSTICUPLOADREQUESTBATCH_H
#define DRSPROTODIAGNOSTICUPLOADREQUESTBATCH_H

@class PBCodable, NSString, NSMutableArray;
@protocol DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying;


#import "DRSProtoClientDeviceMetadata.h"

@interface DRSProtoDiagnosticUploadRequestBatch : PBCodable <DRSDecisionServerBatchRequest, CKCodeOperationMessageMutation, NSCopying>



@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata; // ivar: _clientMetadata
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
@property (retain, nonatomic) NSMutableArray *uploadRequests; // ivar: _uploadRequests


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)uploadRequestsAtIndex:(NSUInteger)arg0 ;
-(void)addUploadRequests:(id)arg0 ;
-(void)clearUploadRequests;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif