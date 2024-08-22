// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ICQUPGRADEOFFERPAGESPECIFICATION_H
#define _ICQUPGRADEOFFERPAGESPECIFICATION_H

@class ICQPageSpecification, NSString, NSArray, NSDictionary;


#import "ICQLink.h"

@interface _ICQUpgradeOfferPageSpecification : ICQPageSpecification

@property (retain, nonatomic) NSString *altMessage; // ivar: _altMessage
@property (retain, nonatomic) NSArray *altMessageLinks; // ivar: _altMessageLinks
@property (retain, nonatomic) ICQLink *bottomLink; // ivar: _bottomLink
@property (retain, nonatomic) NSString *bottomLinkVisibleKey; // ivar: _bottomLinkVisibleKey
@property (retain, nonatomic) NSString *fineprintFormat; // ivar: _fineprintFormat
@property (retain, nonatomic) NSArray *fineprintLinks; // ivar: _fineprintLinks
@property (retain, nonatomic) NSString *iconBundleIdentifier; // ivar: _iconBundleIdentifier
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSArray *messageLinks; // ivar: _messageLinks
@property (retain, nonatomic) ICQLink *purchase2Link; // ivar: _purchase2Link
@property (retain, nonatomic) NSString *purchase2LinkVisibleKey; // ivar: _purchase2LinkVisibleKey
@property (retain, nonatomic) ICQLink *purchaseLink; // ivar: _purchaseLink
@property (readonly, nonatomic) NSDictionary *serverDict; // ivar: _serverDict
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)upgradeOfferPageSpecificationSampleForLevel:(NSInteger)arg0 ;
-(id)copy;
-(id)copyWithBindings:(id)arg0 ;
-(id)debugDescription;
-(id)initWithServerDictionary:(id)arg0 ;
-(id)initWithServerDictionary:(id)arg0 pageIdentifier:(id)arg1 ;


@end


#endif