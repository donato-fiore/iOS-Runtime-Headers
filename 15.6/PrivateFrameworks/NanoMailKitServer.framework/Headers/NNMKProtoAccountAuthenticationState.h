// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOACCOUNTAUTHENTICATIONSTATE_H
#define NNMKPROTOACCOUNTAUTHENTICATIONSTATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NNMKProtoAccountAuthenticationState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAccountId;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasStandaloneState;
@property (readonly, nonatomic) BOOL hasSubsectionId;
@property (nonatomic) unsigned int standaloneState; // ivar: _standaloneState
@property (retain, nonatomic) NSString *subsectionId; // ivar: _subsectionId


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