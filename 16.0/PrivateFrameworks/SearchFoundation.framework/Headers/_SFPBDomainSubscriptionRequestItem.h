// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBDOMAINSUBSCRIPTIONREQUESTITEM_H
#define _SFPBDOMAINSUBSCRIPTIONREQUESTITEM_H

@class PBCodable, NSString, NSData;
@protocol _SFPBDomainSubscriptionRequestItem, NSSecureCoding;


#import "_SFPBSportsSubscriptionRequestItem.h"

@interface _SFPBDomainSubscriptionRequestItem : PBCodable <_SFPBDomainSubscriptionRequestItem, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _SFPBSportsSubscriptionRequestItem *sportsSubscriptionRequestItem; // ivar: _sportsSubscriptionRequestItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger whichValue; // ivar: _whichValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif