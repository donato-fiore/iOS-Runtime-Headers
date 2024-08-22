// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPUBLISHERVIEWRESULT_H
#define GEOPUBLISHERVIEWRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDPublisherViewResult.h"

@interface GEOPublisherViewResult : NSObject {
    GEOPDPublisherViewResult *_publisherViewResult;
    NSArray *_places;
}


@property (readonly, nonatomic) NSArray *collectionIdentifiers;
@property (readonly, nonatomic) NSArray *resultFilters;


-(id)initWithPublisherViewResult:(id)arg0 ;
-(id)initWithPublisherViewResult:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif