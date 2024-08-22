// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTCURRENTSECUREELEMENTIDENTITIES_H
#define OTCURRENTSECUREELEMENTIDENTITIES_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "OTSecureElementPeerIdentity.h"

@interface OTCurrentSecureElementIdentities : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasLocalPeerIdentity;
@property (readonly, nonatomic) BOOL hasPendingLocalPeerIdentity;
@property (retain, nonatomic) OTSecureElementPeerIdentity *localPeerIdentity; // ivar: _localPeerIdentity
@property (retain, nonatomic) OTSecureElementPeerIdentity *pendingLocalPeerIdentity; // ivar: _pendingLocalPeerIdentity
@property (retain, nonatomic) NSMutableArray *trustedPeerSecureElementIdentities; // ivar: _trustedPeerSecureElementIdentities


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trustedPeerSecureElementIdentitiesAtIndex:(NSUInteger)arg0 ;
-(void)addTrustedPeerSecureElementIdentities:(id)arg0 ;
-(void)clearTrustedPeerSecureElementIdentities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif