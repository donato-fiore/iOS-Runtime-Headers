// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPFAVORITESQUERY_H
#define MSPFAVORITESQUERY_H

@class NSArray;


#import "NewMSPQuery.h"

@interface MSPFavoritesQuery : NewMSPQuery

@property (readonly) NSArray *contents;


-(BOOL)isObject:(id)arg0 equalTo:(id)arg1 ;
-(id)favoriteForFavorite:(id)arg0 ;


@end


#endif