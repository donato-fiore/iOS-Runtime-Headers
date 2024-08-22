// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALLCOLLECTIONSVIEWRESULT_H
#define GEOALLCOLLECTIONSVIEWRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDAllCollectionsViewResult.h"

@interface GEOAllCollectionsViewResult : NSObject {
    GEOPDAllCollectionsViewResult *_allCollectionsViewResult;
    NSArray *_places;
}


@property (readonly, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic) NSArray *resultFilters;


-(id)initWithAllCollectionsViewResult:(id)arg0 ;
-(id)initWithAllCollectionsViewResult:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif