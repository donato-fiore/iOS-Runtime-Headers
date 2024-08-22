// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKBASICMOVIEMETADATA_H
#define WLKBASICMOVIEMETADATA_H

@class NSDate, NSString;


#import "WLKBasicContentMetadata.h"
#import "WLKRottenTomatoesRating.h"

@interface WLKBasicMovieMetadata : WLKBasicContentMetadata

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly, nonatomic) WLKRottenTomatoesRating *rottenTomatoesRating; // ivar: _rottenTomatoesRating
@property (readonly, copy, nonatomic) NSString *studio; // ivar: _studio


-(id)initWithDictionary:(id)arg0 ;


@end


#endif