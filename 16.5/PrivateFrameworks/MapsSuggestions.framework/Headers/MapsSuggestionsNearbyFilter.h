// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSNEARBYFILTER_H
#define MAPSSUGGESTIONSNEARBYFILTER_H

@class NSString;
@protocol MapsSuggestionsFilter;


#import "MapsSuggestionsBaseFilter.h"

@interface MapsSuggestionsNearbyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

 {
    CGFloat maxDistance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)shouldKeepEntry:(id)arg0 ;
-(id)init;
-(id)initWithMaximumDistance:(CGFloat)arg0 ;


@end


#endif