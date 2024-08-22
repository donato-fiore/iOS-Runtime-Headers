// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSUGGESTIONSSHORTCUTFILTER_H
#define MAPSSUGGESTIONSSHORTCUTFILTER_H

@class NSString;
@protocol MapsSuggestionsFilter;


#import "MapsSuggestionsBaseFilter.h"

@interface MapsSuggestionsShortcutFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
-(BOOL)shouldKeepEntry:(id)arg0 ;


@end


#endif