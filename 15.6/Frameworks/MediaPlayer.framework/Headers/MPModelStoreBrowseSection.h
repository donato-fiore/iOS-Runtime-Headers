// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSESECTION_H
#define MPMODELSTOREBROWSESECTION_H

@class NSURL, NSString;


#import "MPModelObject.h"
#import "MPModelStoreBrowseResponse.h"
#import "MPModelRadioStation.h"

@interface MPModelStoreBrowseSection : MPModelObject

@property (nonatomic, getter=isBrick) BOOL brick;
@property (nonatomic) BOOL containsOnlyEditorialElements; // ivar: _containsOnlyEditorialElements
@property (nonatomic) BOOL displaysAsGridCellInCarPlay;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (nonatomic, getter=isMemberOfChartSet) BOOL memberOfChartSet;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (nonatomic) NSInteger sectionType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger uniformContentItemType;


+(id)__brick_KEY;
+(id)__memberOfChartSet_KEY;


@end


#endif