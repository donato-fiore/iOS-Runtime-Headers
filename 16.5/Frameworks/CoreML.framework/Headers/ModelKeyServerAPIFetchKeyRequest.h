// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MODELKEYSERVERAPIFETCHKEYREQUEST_H
#define MODELKEYSERVERAPIFETCHKEYREQUEST_H

@class PBRequest, NSString, NSData;
@protocol CKCodeOperationMessageMutation, NSCopying;



@interface ModelKeyServerAPIFetchKeyRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasKeyId;
@property (nonatomic) BOOL hasRawRequest;
@property (readonly, nonatomic) BOOL hasSignedKeyRequest;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *keyId; // ivar: _keyId
@property (nonatomic) BOOL rawRequest; // ivar: _rawRequest
@property (retain, nonatomic) NSData *signedKeyRequest; // ivar: _signedKeyRequest
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *teamId; // ivar: _teamId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif