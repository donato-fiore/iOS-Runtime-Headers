// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIEMOVIETHEATERSHOWTIMES_H
#define SAMOVIEMOVIETHEATERSHOWTIMES_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SALocalSearchBusiness2.h"

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *movieShowtimes;
@property (copy, nonatomic) NSArray *showtimes;
@property (readonly) Class superclass;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;


+(id)movieTheaterShowtimes;
+(id)movieTheaterShowtimesWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif