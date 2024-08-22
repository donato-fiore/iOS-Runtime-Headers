// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQDAEMONOFFER_H
#define ICQDAEMONOFFER_H

@class NSDictionary, NSString;


#import "ICQDaemonPersisted.h"
#import "_ICQAlertSpecification.h"
#import "_ICQFollowupSpecification.h"

@interface ICQDaemonOffer : ICQDaemonPersisted

@property (readonly, nonatomic) _ICQAlertSpecification *alertSpecification;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (retain, nonatomic) _ICQAlertSpecification *internalAlertSpecification; // ivar: _internalAlertSpecification
@property (retain, nonatomic) _ICQFollowupSpecification *internalFollowupSpecification; // ivar: _internalFollowupSpecification
@property (readonly, nonatomic) NSInteger level;
@property (readonly, nonatomic) NSDictionary *lockScreenInfo;
@property (retain, nonatomic) NSString *notificationID; // ivar: _notificationID
@property (copy, nonatomic) NSString *offerId; // ivar: _offerId
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;


+(BOOL)placeholderExistsInString:(id)arg0 ;
+(id)defaultPlaceholderKeys;
+(id)persistenceKey;
+(id)placeholderKeysInString:(id)arg0 fromKeys:(id)arg1 ;
+(id)stringWithPlaceholderFormat:(id)arg0 ;
+(id)stringWithPlaceholderFormat:(id)arg0 alternateString:(id)arg1 ;
+(id)stringWithPlaceholderFormat:(id)arg0 substitutions:(id)arg1 ;
+(id)substitutionForPlaceholderKey:(id)arg0 outIsBelowMin:(*BOOL)arg1 ;
+(id)substitutionsForPlaceholderKeys:(id)arg0 ;
+(id)substitutionsForPlaceholderKeys:(id)arg0 checkIfBelowMin:(BOOL)arg1 outIsMissingSubstitution:(*BOOL)arg2 ;
-(id)_initWithAccount:(id)arg0 error:(id)arg1 ;
-(id)_initWithAccount:(id)arg0 serverDictionary:(id)arg1 ;
-(id)_mutablePersistenceDictionary;
-(id)alertSpecificationForAlertKey:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_addSampleAlert;
-(void)_initSubclassFromServerDictionary;
-(void)setServerDictionary:(id)arg0 ;


@end


#endif