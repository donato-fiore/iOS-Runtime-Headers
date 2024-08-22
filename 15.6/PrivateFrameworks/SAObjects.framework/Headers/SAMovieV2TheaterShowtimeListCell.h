// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIEV2THEATERSHOWTIMELISTCELL_H
#define SAMOVIEV2THEATERSHOWTIMELISTCELL_H

@class NSString;


#import "SADomainObject.h"
#import "SADistance.h"
#import "SAMovieV2ShowtimeSnippet.h"

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) BOOL bookable;
@property (retain, nonatomic) SADistance *relativeDistance;
@property (retain, nonatomic) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (copy, nonatomic) NSString *theaterName;


+(id)theaterShowtimeListCell;
+(id)theaterShowtimeListCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif