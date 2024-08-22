// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMUTABLECURATEDLIBRARYSTATISTICS_H
#define PXMUTABLECURATEDLIBRARYSTATISTICS_H



#import "PXCuratedLibraryStatistics.h"

@interface PXMutableCuratedLibraryStatistics : PXCuratedLibraryStatistics {
    *NSInteger _counts;
}




-(NSInteger)_coutIndexForPlaybackStyle:(NSInteger)arg0 displayProminence:(NSInteger)arg1 autoPlaybackEligibility:(NSInteger)arg2 ;
-(NSInteger)numberOfAssetsWithPlaybackStyle:(NSInteger)arg0 displayProminence:(NSInteger)arg1 autoPlaybackEligibility:(NSInteger)arg2 ;
-(id)init;
-(void)_incrementCountForPlaybackStyle:(NSInteger)arg0 displayProminence:(NSInteger)arg1 autoPlaybackEligibility:(NSInteger)arg2 ;
-(void)appendStatisticsForSection:(NSInteger)arg0 assetsDataSource:(id)arg1 playbackController:(id)arg2 visibleItems:(id)arg3 heroItems:(id)arg4 keyItem:(NSInteger)arg5 ;
-(void)dealloc;


@end


#endif