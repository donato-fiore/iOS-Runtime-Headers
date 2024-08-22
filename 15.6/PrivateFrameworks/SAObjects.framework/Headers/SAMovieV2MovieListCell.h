// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMOVIEV2MOVIELISTCELL_H
#define SAMOVIEV2MOVIELISTCELL_H

@class NSArray, NSString, NSNumber, NSDate;


#import "SADomainObject.h"
#import "SAMovieV2MovieDetailSnippet.h"

@interface SAMovieV2MovieListCell : SADomainObject

@property (copy, nonatomic) NSArray *displayableShowtimes;
@property (retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property (copy, nonatomic) NSString *movieName;
@property (copy, nonatomic) NSArray *posterImages;
@property (copy, nonatomic) NSNumber *qualityRating;
@property (copy, nonatomic) NSString *rating;
@property (copy, nonatomic) NSDate *theatricalReleaseDate;


+(id)movieListCell;
+(id)movieListCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif