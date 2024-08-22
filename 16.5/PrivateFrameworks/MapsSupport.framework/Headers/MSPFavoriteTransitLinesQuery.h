// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPFAVORITETRANSITLINESQUERY_H
#define MSPFAVORITETRANSITLINESQUERY_H

@class NSArray;


#import "MSPFavoritesQuery.h"

@interface MSPFavoriteTransitLinesQuery : MSPFavoritesQuery

@property (readonly) NSArray *contents;


-(id)initWithContainer:(id)arg0 delegate:(id)arg1 filteredWithBlock:(id)arg2 ;


@end


#endif