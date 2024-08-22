// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWHANDLEREADERMODEFIELDSREQUEST_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGFLOWHANDLEREADERMODEFIELDSREQUEST_H

@class PBRequest, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSMutableArray *readerModeFields; // ivar: _readerModeFields
@property (retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)readerModeFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addReaderModeFields:(id)arg0 ;
-(void)clearReaderModeFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif