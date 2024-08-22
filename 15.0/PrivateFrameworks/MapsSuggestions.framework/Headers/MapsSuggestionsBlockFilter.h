// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MAPSSUGGESTIONSBLOCKFILTER_H
#define MAPSSUGGESTIONSBLOCKFILTER_H

@class NSString;
@protocol MapsSuggestionsFilter;


#import "MapsSuggestionsBaseFilter.h"

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

 {
    NSString *_name;
    id *_block;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniqueName;


+(BOOL)isEnabled;
+(id)filterWithBlock:(id)arg0 ;
-(BOOL)shouldKeepEntry:(id)arg0 ;
-(id)initWithBlock:(id)arg0 ;
// -(id)initWithBlock:(id)arg0 name:(unk)arg1  ;


@end


#endif