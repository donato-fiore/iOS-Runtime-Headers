// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSOUTSIDEOFMAPITEMFENCECONDITION_H
#define MAPSSUGGESTIONSOUTSIDEOFMAPITEMFENCECONDITION_H

@class GEOMapItemStorage;


#import "MapsSuggestionsBaseCondition.h"

@interface MapsSuggestionsOutsideOfMapItemFenceCondition : MapsSuggestionsBaseCondition {
    GEOMapItemStorage *_mapItem;
    CGFloat _radius;
}




-(BOOL)isTrue;
-(id)initWithMapItem:(id)arg0 radius:(CGFloat)arg1 ;


@end


#endif