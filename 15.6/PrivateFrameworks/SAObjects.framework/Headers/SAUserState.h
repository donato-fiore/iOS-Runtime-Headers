// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUSERSTATE_H
#define SAUSERSTATE_H

@class NSString, NSArray, NSNumber;
@protocol SABackgroundContextObject;


#import "AceObject.h"
#import "SAUserTokenStatus.h"

@interface SAUserState : AceObject <SABackgroundContextObject>



@property (nonatomic) BOOL ageVerificationRequired;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultMediaPlaybackAppBundleIdentifier;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *eligibleOffers;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iTunesMatchSubscriptionStatus;
@property (nonatomic) BOOL isPromotionRelatedStatus;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *syncSharedUserId;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (retain, nonatomic) SAUserTokenStatus *userTokenStatus;
@property (copy, nonatomic) NSString *xpAbCookie;


+(id)userState;
+(id)userStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif