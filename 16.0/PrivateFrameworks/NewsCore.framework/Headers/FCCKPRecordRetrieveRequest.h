// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRECORDRETRIEVEREQUEST_H
#define FCCKPRECORDRETRIEVEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "FCCKPRecordIdentifier.h"
#import "FCCKPRequestedFields.h"

@interface FCCKPRecordRetrieveRequest : PBRequest <NSCopying>

 {
    NSString *_clientVersionETag;
    FCCKPRecordIdentifier *_recordIdentifier;
    FCCKPRequestedFields *_requestedFields;
    NSString *_versionETag;
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