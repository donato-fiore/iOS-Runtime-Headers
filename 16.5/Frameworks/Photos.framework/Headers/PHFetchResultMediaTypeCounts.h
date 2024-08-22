// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHFETCHRESULTMEDIATYPECOUNTS_H
#define PHFETCHRESULTMEDIATYPECOUNTS_H


#import <Foundation/Foundation.h>


@interface PHFetchResultMediaTypeCounts : NSObject

@property (readonly, nonatomic) NSUInteger audiosCount; // ivar: _audiosCount
@property (readonly, nonatomic) NSUInteger photosCount; // ivar: _photosCount
@property (readonly, nonatomic) NSUInteger videosCount; // ivar: _videosCount


+(id)mediaTypeCountsWithPhotosCount:(NSUInteger)arg0 videosCount:(NSUInteger)arg1 audiosCount:(NSUInteger)arg2 ;
-(id)initWithPhotosCount:(NSUInteger)arg0 videosCount:(NSUInteger)arg1 audiosCount:(NSUInteger)arg2 ;


@end


#endif