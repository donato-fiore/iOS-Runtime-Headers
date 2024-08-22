// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOENCYCLOPEDICINFO_H
#define _GEOENCYCLOPEDICINFO_H

@class NSMapTable, NSString, NSArray;
@protocol GEOEncyclopedicInfo;

#import <Foundation/Foundation.h>

#import "GEOPDPlace.h"
#import "GEOMapItemAttribution.h"

@interface _GEOEncyclopedicInfo : NSObject <GEOEncyclopedicInfo>

 {
    GEOPDPlace *_placeData;
    NSMapTable *_attributionMap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) BOOL hasPairOfFactoids;
@property (readonly, nonatomic) BOOL hasStandAloneFactoids;
@property (readonly, nonatomic) BOOL hasTextBlock;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *placeSummaryFactoids;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) NSString *textBlockTitle;


-(id)factoidAtIndex:(int)arg0 ;
-(id)firstFactoidForSemantic:(int)arg0 ;
-(id)initWithPlaceData:(id)arg0 attributionMap:(id)arg1 ;


@end


#endif