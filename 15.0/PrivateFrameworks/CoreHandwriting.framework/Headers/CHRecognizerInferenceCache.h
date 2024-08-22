// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHRECOGNIZERINFERENCECACHE_H
#define CHRECOGNIZERINFERENCECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CHDrawing.h"

@interface CHRecognizerInferenceCache : NSObject {
    CHDrawing *_lastDrawing;
    NSMutableDictionary *_cachedActivationMatrices;
    NSMutableDictionary *_cachedStrokeEndings;
}




-(id)debugDescription;
-(id)description;
-(id)init;
-(id)retrieveActivationMatrixForDrawing:(id)arg0 recognitionEngineCachingKey:(id)arg1 outStrokeEndings:(*id)arg2 ;
-(void)cacheActivationMatrix:(id)arg0 strokeEndings:(id)arg1 drawing:(id)arg2 recognitionEngineCachingKey:(id)arg3 ;
-(void)clearCache;
-(void)dealloc;


@end


#endif