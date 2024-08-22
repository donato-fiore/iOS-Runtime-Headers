// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMOVIESHOWTIME_H
#define SAMOVIESHOWTIME_H

@class NSNumber, NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"
#import "SACalendar.h"

@interface SAMovieShowtime : AceObject <SAAceSerializable>



@property (retain, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
@property (copy, nonatomic) NSNumber *childTicketQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL is3d;
@property (nonatomic) BOOL isImax;
@property (copy, nonatomic) NSNumber *regularTicketQuantity;
@property (copy, nonatomic) NSNumber *seniorTicketQuantity;
@property (retain, nonatomic) SACalendar *showtime;
@property (readonly) Class superclass;


+(id)showtimeWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif