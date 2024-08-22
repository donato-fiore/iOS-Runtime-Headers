// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADYNAMITECLIENTSTATE_H
#define SADYNAMITECLIENTSTATE_H

@class NSString, NSArray, NSNumber;
@protocol SABackgroundContextObject;


#import "SAAceClientState.h"
#import "SAUserState.h"
#import "SACalendar.h"
#import "SAUserTokenStatus.h"

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>



@property (nonatomic) BOOL activeTvUser;
@property (nonatomic) BOOL ageVerificationRequired;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) SAUserState *defaultUserState;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *eligibleOffers;
@property (retain, nonatomic) SACalendar *expirationDate;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *iCloudMusicLibraryToggle;
@property (copy, nonatomic) NSString *iTunesMatchSubscriptionStatus;
@property (copy, nonatomic) NSArray *inContextUsersStates;
@property (nonatomic) BOOL isPromotionRelatedStatus;
@property (copy, nonatomic) NSString *status;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (retain, nonatomic) SAUserTokenStatus *userTokenStatus;
@property (copy, nonatomic) NSString *xpAbCookie;


+(id)deliveryDeadline;
+(id)dynamiteClientState;
+(id)dynamiteClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
+(id)persistencePolicy;
+(id)syncKey;
+(id)uniqueObjectIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif