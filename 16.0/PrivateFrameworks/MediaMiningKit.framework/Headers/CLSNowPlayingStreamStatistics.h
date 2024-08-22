// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSNOWPLAYINGSTREAMSTATISTICS_H
#define CLSNOWPLAYINGSTREAMSTATISTICS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CLSNowPlayingStreamStatistics : NSObject

@property (readonly, nonatomic) CGFloat maxDurationInSeconds; // ivar: _maxDurationInSeconds
@property (readonly, nonatomic) CGFloat minDurationInSeconds; // ivar: _minDurationInSeconds
@property (readonly, nonatomic) NSArray *sortedAlbums; // ivar: _sortedAlbums
@property (readonly, nonatomic) NSArray *sortedArtists; // ivar: _sortedArtists
@property (readonly, nonatomic) NSArray *sortedGenres; // ivar: _sortedGenres
@property (readonly, nonatomic) NSArray *sortedSessions; // ivar: _sortedSessions
@property (readonly, nonatomic) NSArray *sortedSources; // ivar: _sortedSources
@property (readonly, nonatomic) NSArray *sortedTitles; // ivar: _sortedTitles


-(id)initWithNowPlayingStreamSessions:(id)arg0 ;
-(void)computeStatistics;
-(void)logStatistics;


@end


#endif