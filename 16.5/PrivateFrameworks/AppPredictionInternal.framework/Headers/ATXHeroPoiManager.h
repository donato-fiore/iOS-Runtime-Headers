// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHEROPOIMANAGER_H
#define ATXHEROPOIMANAGER_H

@class BMPOICategoryStream;

#import <Foundation/Foundation.h>


@interface ATXHeroPoiManager : NSObject {
    BMPOICategoryStream *_poiCategoryStream;
}




-(id)cachedPoiCategory;
-(id)currentPoiCategory;
-(id)mostRecentHighestRankedPoiCategory:(id)arg0 ;
-(id)poiCategoryEventsWithStreamPublisher:(id)arg0 ;
-(id)poiCategoryPublisherBookmark;
-(id)poiCategoryStream;
-(id)poiCategoryStreamPublisher;
-(void)donateHeroPoiPredictions:(id)arg0 ;
-(void)donatePoiCategoryToBiome:(id)arg0 rank:(NSUInteger)arg1 timeIntervalSince1970:(CGFloat)arg2 ;
-(void)logCompletion:(id)arg0 ;


@end


#endif