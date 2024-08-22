// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIEV2SHOWTIMESNIPPET_H
#define SAMOVIEV2SHOWTIMESNIPPET_H

@class NSString, NSArray;


#import "SAUISnippet.h"
#import "SAUIImageResource.h"
#import "SALocalSearchBusiness2.h"

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (retain, nonatomic) SAUIImageResource *attributionLogo;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *showtimes;
@property (retain, nonatomic) SALocalSearchBusiness2 *theater;
@property (copy, nonatomic) NSString *theaterName;


+(id)showtimeSnippet;
+(id)showtimeSnippetWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif