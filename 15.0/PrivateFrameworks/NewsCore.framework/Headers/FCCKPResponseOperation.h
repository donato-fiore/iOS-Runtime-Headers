// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRESPONSEOPERATION_H
#define FCCKPRESPONSEOPERATION_H

@class PBCodable;
@protocol NSCopying;


#import "FCCKPQueryRetrieveResponse.h"
#import "FCCKPRecordRetrieveResponse.h"
#import "FCCKPOperation.h"
#import "FCCKPResponseOperationResult.h"

@interface FCCKPResponseOperation : PBCodable <NSCopying>

 {
    unsigned int _operationCost;
    FCCKPQueryRetrieveResponse *_queryRetrieveResponse;
    FCCKPRecordRetrieveResponse *_recordRetrieveResponse;
    FCCKPOperation *_response;
    FCCKPResponseOperationResult *_result;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif