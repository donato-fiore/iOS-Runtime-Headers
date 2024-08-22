// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRESPONSEOPERATIONRESULTERROR_H
#define CKDPRESPONSEOPERATIONRESULTERROR_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CKDPResponseOperationResultErrorAuxiliaryError.h"
#import "CKDPResponseOperationResultErrorClient.h"
#import "CKDPResponseOperationResultErrorExtension.h"
#import "CKDPResponseOperationResultErrorServer.h"

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError; // ivar: _auxiliaryError
@property (retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError; // ivar: _clientError
@property (retain, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (retain, nonatomic) NSString *errorInternal; // ivar: _errorInternal
@property (retain, nonatomic) NSString *errorKey; // ivar: _errorKey
@property (retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError; // ivar: _extensionError
@property (readonly, nonatomic) BOOL hasAuxiliaryError;
@property (readonly, nonatomic) BOOL hasClientError;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasErrorInternal;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (readonly, nonatomic) BOOL hasServerError;
@property (nonatomic) int retryAfterSeconds; // ivar: _retryAfterSeconds
@property (retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError; // ivar: _serverError


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