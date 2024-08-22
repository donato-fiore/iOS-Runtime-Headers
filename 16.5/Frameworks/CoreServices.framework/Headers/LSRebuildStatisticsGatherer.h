// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSREBUILDSTATISTICSGATHERER_H
#define LSREBUILDSTATISTICSGATHERER_H

@class NSError;

#import <Foundation/Foundation.h>


@interface LSRebuildStatisticsGatherer : NSObject {
    NSUInteger _totalRebuildTime;
    NSUInteger _systemContentScanTime;
    NSUInteger _systemContentSaveTime;
    NSUInteger _cryptexContentScanTime;
    NSUInteger _containerizedContentScanTime;
    NSUInteger _numPlugins;
    NSUInteger _numApplications;
    BOOL _onlyCryptexContent;
    BOOL _migratorRunning;
    BOOL _userRequested;
    unsigned short _rebuildReasonFlags;
    NSError *_rebuildError;
}




-(id)init;


@end


#endif