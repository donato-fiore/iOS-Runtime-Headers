// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INGETRESTAURANTGUESTINTENTRESPONSE_H
#define INGETRESTAURANTGUESTINTENTRESPONSE_H

@class NSString;
@protocol INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport;


#import "INIntentResponse.h"
#import "INRestaurantGuest.h"
#import "INRestaurantGuestDisplayPreferences.h"

@interface INGetRestaurantGuestIntentResponse : INIntentResponse <INImageProxyInjecting, INGetRestaurantGuestIntentResponseExport>



@property (readonly, nonatomic) NSInteger code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INRestaurantGuest *guest; // ivar: _guest
@property (copy, nonatomic) INRestaurantGuestDisplayPreferences *guestDisplayPreferences; // ivar: _guestDisplayPreferences
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBackingStore:(id)arg0 ;
-(id)initWithCode:(NSInteger)arg0 userActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif