// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDCOLORANALYZER_H
#define EDCOLORANALYZER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface EDColorAnalyzer : NSObject {
    NSMutableDictionary *_cache;
}




-(BOOL)kmeansShouldStopWithPreviousColors:(id)arg0 newColors:(id)arg1 iterations:(NSInteger)arg2 ;
-(id)colorAtCenterOfSurface:(struct __IOSurface *)arg0 offset:(struct CGPoint )arg1 ;
-(id)colorsInSurface:(struct __IOSurface *)arg0 offset:(struct CGPoint )arg1 clipToCircle:(BOOL)arg2 clipedToRect:(struct CGRect )arg3 ;
-(id)colorsSuggestionsForSurface:(struct __IOSurface *)arg0 maxSuggestions:(NSInteger)arg1 clipToCircle:(BOOL)arg2 clipedToRect:(struct CGRect )arg3 ;
-(id)getRandomColors:(NSInteger)arg0 from:(id)arg1 ;
-(id)init;
-(id)kmeansColorsForColors:(id)arg0 clusters:(NSInteger)arg1 ;
-(id)kmeansForColors:(id)arg0 clusters:(NSInteger)arg1 ;
-(id)removeSimilarColors:(id)arg0 minDistance:(CGFloat)arg1 ;
-(void)clearCache;


@end


#endif