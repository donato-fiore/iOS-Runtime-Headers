// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHRECOGNIZERRESULTCACHE_H
#define CHRECOGNIZERRESULTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CHRecognizerResultCache : NSObject {
    NSMutableDictionary *_lastDrawings;
    NSMutableDictionary *_textResults;
}




-(id)init;
-(id)retrievePartialResultsForDrawing:(id)arg0 recognitionEngineCachingKey:(id)arg1 matchingColumnRange:(struct _NSRange *)arg2 ;
-(void)cacheTextResult:(id)arg0 drawing:(id)arg1 recognitionEngineCachingKey:(id)arg2 ;
-(void)clearCacheForKey:(id)arg0 ;


@end


#endif