// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOALLCOLLECTIONSVIEWRESULTFILTER_H
#define GEOALLCOLLECTIONSVIEWRESULTFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDAllCollectionsViewResultFilter.h"
#import "GEOAllCollectionsViewResultFilterTypeAddress.h"
#import "GEOAllCollectionsViewResultFilterTypeKeyword.h"

@interface GEOAllCollectionsViewResultFilter : NSObject {
    GEOPDAllCollectionsViewResultFilter *_resultFilter;
    NSArray *_places;
}


@property (readonly, nonatomic) GEOAllCollectionsViewResultFilterTypeAddress *addressFilter;
@property (readonly, nonatomic) NSInteger filterType;
@property (readonly, nonatomic) GEOAllCollectionsViewResultFilterTypeKeyword *keywordFilter;


-(id)initWithAllCollectionsViewResultFilter:(id)arg0 withPlaces:(id)arg1 ;


@end


#endif