// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLEXMLSUMMARYMANAGER_H
#define FLEXMLSUMMARYMANAGER_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FlexMLSummaryManager : NSObject

@property (readonly, nonatomic) NSArray *allDurations; // ivar: _allDurations
@property (readonly, nonatomic) NSArray *allFileNames; // ivar: _allFileNames
@property (readonly, nonatomic) NSString *metadataPath; // ivar: _metadataPath
@property (readonly, nonatomic) NSString *rootPath; // ivar: _rootPath
@property (readonly, nonatomic) int targetTimeScale; // ivar: _targetTimeScale


-(CGFloat)averageGranularityBetweenSummaries;
-(id)_summaryForDuration:(struct ? )arg0 ;
-(id)allSummaryDurations;
-(id)initWithSummaryMapping:(id)arg0 bundlePath:(id)arg1 metadataPath:(id)arg2 targetTimeScale:(int)arg3 ;
-(id)summaryForDuration:(struct ? )arg0 ;


@end


#endif