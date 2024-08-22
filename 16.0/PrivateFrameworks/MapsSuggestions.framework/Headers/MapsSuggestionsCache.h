// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPSSUGGESTIONSCACHE_H
#define MAPSSUGGESTIONSCACHE_H


#import <Foundation/Foundation.h>


@interface MapsSuggestionsCache : NSObject



+(BOOL)loadFromFilePath:(id)arg0 storage:(*id)arg1 ETAValidUntilDate:(*id)arg2 ;
+(BOOL)saveToFilePath:(id)arg0 storage:(id)arg1 ETAValidUntilDate:(id)arg2 ;


@end


#endif