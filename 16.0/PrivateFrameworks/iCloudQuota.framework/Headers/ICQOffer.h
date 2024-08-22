// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQOFFER_H
#define ICQOFFER_H

@class NSDictionary, NSString, NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_ICQXMLSpecification.h"
#import "_ICQBannerSpecification.h"
#import "_ICQButtonSpecification.h"
#import "_ICQDeviceInfo.h"
#import "_ICQDynamicUISpecification.h"
#import "_ICQFollowupSpecification.h"
#import "_ICQUpgradeFlowSpecification.h"

@interface ICQOffer : NSObject <NSSecureCoding>

 {
    NSDictionary *_serverDictionary;
    NSDictionary *_planDetailsOverride;
    NSInteger _actionOverride;
}


@property (readonly, nonatomic) _ICQXMLSpecification *XMLSpecification;
@property (retain, nonatomic) _ICQXMLSpecification *XMLSpecification; // ivar: _XMLSpecification
@property (readonly, nonatomic) CGFloat _callbackInterval;
@property (retain, nonatomic) NSString *accountAltDSID; // ivar: _accountAltDSID
@property (readonly, nonatomic) NSInteger action;
@property (retain, nonatomic) NSString *appVersionId;
@property (retain, nonatomic) NSString *appVersionId; // ivar: _appVersionId
@property (readonly, nonatomic) _ICQBannerSpecification *bannerSpecification;
@property (retain, nonatomic) _ICQBannerSpecification *bannerSpecification; // ivar: _bannerSpecification
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) _ICQButtonSpecification *buttonSpecification;
@property (retain, nonatomic) _ICQButtonSpecification *buttonSpecification; // ivar: _buttonSpecification
@property (retain, nonatomic) NSString *context;
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo;
@property (retain, nonatomic) _ICQDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) _ICQDynamicUISpecification *dynamicUISpecification;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (retain, nonatomic) _ICQFollowupSpecification *followupSpecification; // ivar: _followupSpecification
@property (readonly, nonatomic) BOOL iTunesAccountExists;
@property (nonatomic) BOOL iTunesAccountExists; // ivar: _iTunesAccountExists
@property (nonatomic) NSInteger level; // ivar: _level
@property (retain, nonatomic) NSString *notificationID; // ivar: _notificationID
@property (retain, nonatomic) NSString *offerId; // ivar: _offerId
@property (readonly, nonatomic) NSInteger offerType; // ivar: _offerType
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;
@property (readonly, nonatomic) NSURL *remoteUIURL;
@property (readonly, nonatomic) NSURL *requestedRemoteUIURL;
@property (retain, nonatomic) NSURL *requestedRemoteUIURL; // ivar: _requestedRemoteUIURL
@property (retain, nonatomic) NSDate *retrievalDate; // ivar: _retrievalDate
@property (retain, nonatomic) _ICQBannerSpecification *universalLinkSpecification; // ivar: _universalLinkSpecification
@property (readonly, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (retain, nonatomic) _ICQUpgradeFlowSpecification *upgradeFlowSpecification; // ivar: _upgradeFlowSpecification


+(BOOL)supportsSecureCoding;
+(id)sampleOfferForLevel:(NSInteger)arg0 ;
-(BOOL)isDetailAppBannerOffer;
-(BOOL)placeholderExists;
-(BOOL)showsPhotoVideoCounts;
-(id)_processICQURL:(id)arg0 ;
-(id)alertSpecificationAtIndex:(NSUInteger)arg0 ;
-(id)alertSpecificationForAlertKey:(id)arg0 ;
-(id)bannerSpecificationForReason:(id)arg0 bundleId:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerDictionary:(id)arg0 accountAltDSID:(id)arg1 notificationID:(id)arg2 retrievalDate:(id)arg3 callbackInterval:(CGFloat)arg4 bundleIdentifier:(id)arg5 ;
-(id)journeyLinkForId:(id)arg0 ;
-(id)storagePurchaseKeybagForButtonId:(id)arg0 ;
-(id)universalLink;
-(void)_updateRequestedRemoteUIURLWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateOfferWithPlanDetails:(id)arg0 actionString:(id)arg1 ;


@end


#endif