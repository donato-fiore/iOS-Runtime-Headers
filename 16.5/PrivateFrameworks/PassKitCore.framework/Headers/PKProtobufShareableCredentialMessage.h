// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFSHAREABLECREDENTIALMESSAGE_H
#define PKPROTOBUFSHAREABLECREDENTIALMESSAGE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;



@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *dataString; // ivar: _dataString
@property (readonly, nonatomic) BOOL hasDataString;
@property (nonatomic) BOOL hasIsPassInLibrary;
@property (readonly, nonatomic) BOOL hasMessageCaption;
@property (readonly, nonatomic) BOOL hasPassThumbnailImage;
@property (readonly, nonatomic) BOOL hasPolicyIdentifier;
@property (nonatomic) BOOL isPassInLibrary; // ivar: _isPassInLibrary
@property (retain, nonatomic) NSString *messageCaption; // ivar: _messageCaption
@property (retain, nonatomic) NSData *passThumbnailImage; // ivar: _passThumbnailImage
@property (retain, nonatomic) NSString *policyIdentifier; // ivar: _policyIdentifier
@property (retain, nonatomic) NSMutableArray *shareableCredentials; // ivar: _shareableCredentials
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)shareableCredentialsAtIndex:(NSUInteger)arg0 ;
-(void)addShareableCredentials:(id)arg0 ;
-(void)clearShareableCredentials;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif