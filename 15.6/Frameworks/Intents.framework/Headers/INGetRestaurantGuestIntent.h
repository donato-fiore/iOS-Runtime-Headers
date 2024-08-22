// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INGETRESTAURANTGUESTINTENT_H
#define INGETRESTAURANTGUESTINTENT_H

@class NSString;
@protocol INGetRestaurantGuestIntentExport;


#import "INIntent.h"

@interface INGetRestaurantGuestIntent : INIntent <INGetRestaurantGuestIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)intentDescription;


@end


#endif