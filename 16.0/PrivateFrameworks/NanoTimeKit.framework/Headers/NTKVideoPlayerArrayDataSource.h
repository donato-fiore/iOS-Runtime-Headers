// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKVIDEOPLAYERARRAYDATASOURCE_H
#define NTKVIDEOPLAYERARRAYDATASOURCE_H

@class NSArray;


#import "NTKVideoPlayerDataSource.h"

@interface NTKVideoPlayerArrayDataSource : NTKVideoPlayerDataSource {
    NSInteger _currentListingIndex;
    NSArray *_listings;
}


@property (nonatomic) NSUInteger order; // ivar: _order


+(id)dataSourceForDevice:(id)arg0 withFilenames:(id)arg1 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 andFilenames:(id)arg2 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 andListings:(id)arg2 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 order:(NSUInteger)arg2 andFilenames:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 order:(NSUInteger)arg2 andListings:(id)arg3 ;
+(id)dataSourceForDevice:(id)arg0 withPosterImage:(id)arg1 order:(NSUInteger)arg2 endBehavior:(NSUInteger)arg3 andFilenames:(id)arg4 ;
-(id)currentListing;
-(id)initForDevice:(id)arg0 withListings:(id)arg1 ;
-(void)advanceToNextListing:(NSUInteger)arg0 ;


@end


#endif