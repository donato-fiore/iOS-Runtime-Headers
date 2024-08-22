// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MURELATEDPLACESECTIONCONTROLLERCONFIGURATION_H
#define MURELATEDPLACESECTIONCONTROLLERCONFIGURATION_H

@class GEORelatedPlaceModuleConfiguration, GEORelatedPlaceList;

#import <Foundation/Foundation.h>


@interface MURelatedPlaceSectionControllerConfiguration : NSObject

@property (retain, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfiguration; // ivar: _moduleConfiguration
@property (readonly, nonatomic) NSUInteger numInlineItems;
@property (readonly, nonatomic) GEORelatedPlaceList *relatedPlaceList; // ivar: _relatedPlaceList
@property (nonatomic) BOOL suppressItemSelection; // ivar: _suppressItemSelection
@property (nonatomic) BOOL suppressSeeAllButton; // ivar: _suppressSeeAllButton


-(id)initWithRelatedPlaceList:(id)arg0 ;


@end


#endif