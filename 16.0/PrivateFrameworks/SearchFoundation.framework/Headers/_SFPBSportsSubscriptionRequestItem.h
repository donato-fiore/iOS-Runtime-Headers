// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBSPORTSSUBSCRIPTIONREQUESTITEM_H
#define _SFPBSPORTSSUBSCRIPTIONREQUESTITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBSportsSubscriptionRequestItem, NSSecureCoding;



@interface _SFPBSportsSubscriptionRequestItem : PBCodable <_SFPBSportsSubscriptionRequestItem, NSSecureCoding>



@property (copy, nonatomic) NSString *canonicalIdentifier; // ivar: _canonicalIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *leagueIdentifier; // ivar: _leagueIdentifier
@property (copy, nonatomic) NSString *sportIdentifier; // ivar: _sportIdentifier
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif