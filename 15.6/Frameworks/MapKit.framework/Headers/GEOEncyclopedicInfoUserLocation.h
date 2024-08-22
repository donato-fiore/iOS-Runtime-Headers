// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOENCYCLOPEDICINFOUSERLOCATION_H
#define GEOENCYCLOPEDICINFOUSERLOCATION_H

@class NSString, GEOMapItemAttribution, NSArray;
@protocol GEOEncyclopedicInfo;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo>

 {
    BOOL _isUserLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property (readonly, nonatomic) NSArray *factoids;
@property (readonly, nonatomic) BOOL hasPairOfFactoids;
@property (readonly, nonatomic) BOOL hasStandAloneFactoids;
@property (readonly, nonatomic) BOOL hasTextBlock;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) NSArray *placeSummaryFactoids;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) NSString *textBlockTitle;


-(BOOL)canBeDisplayedInPlaceSummary;
-(id)factoidAtIndex:(int)arg0 ;
-(id)firstFactoidForSemantic:(int)arg0 ;
-(id)initWithMapItem:(id)arg0 isUserLocation:(BOOL)arg1 ;


@end


#endif