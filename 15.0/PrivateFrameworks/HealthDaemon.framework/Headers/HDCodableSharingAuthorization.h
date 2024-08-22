// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESHARINGAUTHORIZATION_H
#define HDCODABLESHARINGAUTHORIZATION_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableSharingAuthorization : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *authorizationIdentifier; // ivar: _authorizationIdentifier
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAuthorizationIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithSharingAuthorization:(id)arg0 ;
-(id)sharingAuthorization;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif