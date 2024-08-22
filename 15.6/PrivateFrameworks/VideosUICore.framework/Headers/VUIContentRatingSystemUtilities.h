// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICONTENTRATINGSYSTEMUTILITIES_H
#define VUICONTENTRATINGSYSTEMUTILITIES_H


#import <Foundation/Foundation.h>


@interface VUIContentRatingSystemUtilities : NSObject



+(BOOL)_isRatingSystemForMovies:(NSInteger)arg0 ;
+(BOOL)_isRatingSystemForMusic:(NSInteger)arg0 ;
+(BOOL)_isRatingSystemForTV:(NSInteger)arg0 ;
+(NSInteger)ratingSystemForString:(id)arg0 ;
+(NSInteger)ratingSystemKindForRatingSystem:(NSInteger)arg0 ;
+(id)_cleanedRatingSystem:(id)arg0 ;
+(id)_ratingSystemLookUpDictionary;
+(id)_ratingSystemStringLookUpDictionary;
+(id)stringForRatingSystem:(NSInteger)arg0 ;


@end


#endif