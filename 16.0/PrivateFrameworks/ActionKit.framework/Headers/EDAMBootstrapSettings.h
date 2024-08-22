// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMBOOTSTRAPSETTINGS_H
#define EDAMBOOTSTRAPSETTINGS_H

@class NSString, NSNumber;


#import "FATObject.h"

@interface EDAMBootstrapSettings : FATObject

@property (retain, nonatomic) NSString *accountEmailDomain; // ivar: _accountEmailDomain
@property (retain, nonatomic) NSString *announcementsUrl; // ivar: _announcementsUrl
@property (retain, nonatomic) NSString *cardscanUrl; // ivar: _cardscanUrl
@property (retain, nonatomic) NSNumber *enableFacebookSharing; // ivar: _enableFacebookSharing
@property (retain, nonatomic) NSNumber *enableGiftSubscriptions; // ivar: _enableGiftSubscriptions
@property (retain, nonatomic) NSNumber *enableGoogle; // ivar: _enableGoogle
@property (retain, nonatomic) NSNumber *enableLinkedInSharing; // ivar: _enableLinkedInSharing
@property (retain, nonatomic) NSNumber *enablePublicNotebooks; // ivar: _enablePublicNotebooks
@property (retain, nonatomic) NSNumber *enableSharedNotebooks; // ivar: _enableSharedNotebooks
@property (retain, nonatomic) NSNumber *enableSingleNoteSharing; // ivar: _enableSingleNoteSharing
@property (retain, nonatomic) NSNumber *enableSponsoredAccounts; // ivar: _enableSponsoredAccounts
@property (retain, nonatomic) NSNumber *enableSupportTickets; // ivar: _enableSupportTickets
@property (retain, nonatomic) NSNumber *enableTwitterSharing; // ivar: _enableTwitterSharing
@property (retain, nonatomic) NSString *marketingUrl; // ivar: _marketingUrl
@property (retain, nonatomic) NSString *serviceHost; // ivar: _serviceHost
@property (retain, nonatomic) NSString *supportUrl; // ivar: _supportUrl


+(id)structFields;
+(id)structName;


@end


#endif