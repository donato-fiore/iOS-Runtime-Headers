// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPQUERYRETRIEVEREQUEST_H
#define FCCKPQUERYRETRIEVEREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;


#import "FCCKPQuery.h"
#import "FCCKPRequestedFields.h"
#import "FCCKPRecordZoneIdentifier.h"

@interface FCCKPQueryRetrieveRequest : PBRequest <NSCopying>

 {
    NSData *_continuationMarker;
    unsigned int _limit;
    FCCKPQuery *_query;
    FCCKPRequestedFields *_requestedFields;
    FCCKPRecordZoneIdentifier *_zoneIdentifier;
    ? _has;
}




+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)writeTo:(id)arg0 ;


@end


#endif