// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOGUIDESHOMERESULT_H
#define GEOGUIDESHOMERESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOPDGuidesHomeResult.h"
#import "GEOGuidesHomeFixedSection.h"

@interface GEOGuidesHomeResult : NSObject {
    GEOPDGuidesHomeResult *_pdGuideHomeResult;
    NSArray *_mapsResults;
}


@property (readonly, nonatomic) GEOGuidesHomeFixedSection *featuredGuidesSection;
@property (readonly, nonatomic) GEOGuidesHomeFixedSection *filteredGuidesSection;
@property (readonly, nonatomic) GEOGuidesHomeFixedSection *filtersSection;
@property (readonly, nonatomic) NSArray *repeatableSections;


-(id)guideLocationName:(id)arg0 ;
-(id)initWithGuidesHomeFixedSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif