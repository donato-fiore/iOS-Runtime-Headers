// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMOVIEV2THEATERLISTCELL_H
#define SAMOVIEV2THEATERLISTCELL_H

@class NSString;


#import "SADomainObject.h"
#import "SADistance.h"
#import "SAMovieV2MovieListSnippet.h"

@interface SAMovieV2TheaterListCell : SADomainObject

@property (retain, nonatomic) SADistance *relativeDistance;
@property (copy, nonatomic) NSString *theaterAddress;
@property (copy, nonatomic) NSString *theaterName;
@property (retain, nonatomic) SAMovieV2MovieListSnippet *theaterShowtimeListSnippet;


+(id)theaterListCell;
+(id)theaterListCellWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif