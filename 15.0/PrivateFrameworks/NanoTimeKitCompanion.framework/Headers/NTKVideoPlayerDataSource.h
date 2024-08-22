// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKVIDEOPLAYERDATASOURCE_H
#define NTKVIDEOPLAYERDATASOURCE_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "NTKVideoPlayerListing.h"

@interface NTKVideoPlayerDataSource : NSObject

@property (retain, nonatomic) NTKVideoPlayerListing *currentListing; // ivar: _currentListing
@property (retain, nonatomic) UIImage *posterImage; // ivar: _posterImage


-(id)init;
-(id)listingToQueueOncePlaybackStarts;
-(id)listingsToQueueAfterCurrent;
-(void)advanceToNextListing:(NSUInteger)arg0 ;


@end


#endif