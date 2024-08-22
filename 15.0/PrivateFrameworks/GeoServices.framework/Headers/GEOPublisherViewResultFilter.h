// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPUBLISHERVIEWRESULTFILTER_H
#define GEOPUBLISHERVIEWRESULTFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDPublisherViewResultFilter.h"
#import "GEOPublisherViewResultFilterAddress.h"
#import "GEOPublisherViewResultFilterKeyword.h"

@interface GEOPublisherViewResultFilter : NSObject {
    GEOPDPublisherViewResultFilter *_resultFilter;
    NSArray *_places;
}


@property (readonly, nonatomic) GEOPublisherViewResultFilterAddress *addressFilter;
@property (readonly, nonatomic) NSInteger filterType;
@property (readonly, nonatomic) GEOPublisherViewResultFilterKeyword *keywordFilter;


-(id)initWithPublisherViewResultFilter:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif