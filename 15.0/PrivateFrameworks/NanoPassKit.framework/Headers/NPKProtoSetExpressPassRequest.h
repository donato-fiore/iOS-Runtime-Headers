// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPROTOSETEXPRESSPASSREQUEST_H
#define NPKPROTOSETEXPRESSPASSREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic) BOOL cancelOutstandingRequests; // ivar: _cancelOutstandingRequests
@property (retain, nonatomic) NSData *expressPassInformation; // ivar: _expressPassInformation
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) BOOL requestAuthorization; // ivar: _requestAuthorization
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif