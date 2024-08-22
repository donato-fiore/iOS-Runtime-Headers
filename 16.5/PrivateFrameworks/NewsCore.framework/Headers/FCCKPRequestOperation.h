// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKPREQUESTOPERATION_H
#define FCCKPREQUESTOPERATION_H

@class PBCodable;
@protocol NSCopying;


#import "FCCKPRequestOperationHeader.h"
#import "FCCKPQueryRetrieveRequest.h"
#import "FCCKPRecordRetrieveRequest.h"
#import "FCCKPOperation.h"

@interface FCCKPRequestOperation : PBCodable <NSCopying>

 {
    FCCKPRequestOperationHeader *_header;
    FCCKPQueryRetrieveRequest *_queryRetrieveRequest;
    FCCKPRecordRetrieveRequest *_recordRetrieveRequest;
    FCCKPOperation *_request;
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