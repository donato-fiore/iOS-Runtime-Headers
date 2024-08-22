// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYSTATISTICS_H
#define PXCURATEDLIBRARYSTATISTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryStatistics : NSObject

@property (readonly, nonatomic) NSString *summaryDescription;


-(NSInteger)numberOfAssetsWithPlaybackStyle:(NSInteger)arg0 displayProminence:(NSInteger)arg1 autoPlaybackEligibility:(NSInteger)arg2 ;


@end


#endif