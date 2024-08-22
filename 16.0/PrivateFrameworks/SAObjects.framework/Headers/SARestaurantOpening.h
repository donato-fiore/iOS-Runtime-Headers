// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARESTAURANTOPENING_H
#define SARESTAURANTOPENING_H

@class NSURL, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"
#import "SACalendar.h"

@interface SARestaurantOpening : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSURL *bookingId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SAUIAppPunchOut *makeReservationPunchOut;
@property (copy, nonatomic) NSNumber *partySize;
@property (readonly) Class superclass;
@property (retain, nonatomic) SACalendar *timeSlot;


+(id)opening;
+(id)openingWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif