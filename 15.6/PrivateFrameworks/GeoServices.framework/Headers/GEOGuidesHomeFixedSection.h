// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOGUIDESHOMEFIXEDSECTION_H
#define GEOGUIDESHOMEFIXEDSECTION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDGuidesHomeFixedSection.h"

@interface GEOGuidesHomeFixedSection : NSObject {
    GEOPDGuidesHomeFixedSection *_pdFixedSection;
    NSArray *_mapsResults;
}


@property (readonly, nonatomic) NSArray *featuredGuides;
@property (readonly, nonatomic) NSArray *filteredGuideIds;
@property (readonly, nonatomic) NSArray *filteredGuides;
@property (readonly, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSInteger sectionType;
@property (readonly, nonatomic) NSString *title;


-(id)guideResultsFromMapResults;
-(id)initWithGuidesHomeFixedSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif