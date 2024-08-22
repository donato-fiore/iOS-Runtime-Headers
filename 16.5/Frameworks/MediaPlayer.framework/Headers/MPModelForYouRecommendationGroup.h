// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELFORYOURECOMMENDATIONGROUP_H
#define MPMODELFORYOURECOMMENDATIONGROUP_H

@class NSURL, NSDate, NSArray, NSString;


#import "MPModelObject.h"
#import "MPSectionedCollection.h"

@interface MPModelForYouRecommendationGroup : MPModelObject {
    NSURL *_refreshURL;
}


@property (nonatomic) BOOL displaysAsGridCellInCarPlay;
@property (nonatomic) BOOL displaysAsTitledSectionWithRowsInCarPlay;
@property (nonatomic, getter=isGroupRecommendation) BOOL groupRecommendation; // ivar: _groupRecommendation
@property (nonatomic) NSUInteger groupType;
@property (copy, nonatomic) NSURL *hrefURL;
@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (copy, nonatomic) NSURL *refreshURL;
@property (nonatomic) NSInteger sectionIndex;
@property (retain, nonatomic) MPSectionedCollection *sectionedItems;
@property (copy, nonatomic) NSArray *subgroups;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSUInteger traits;


+(id)classesForSecureCoding;
-(NSInteger)numberOfItems;
-(id)itemAtIndex:(NSInteger)arg0 ;


@end


#endif