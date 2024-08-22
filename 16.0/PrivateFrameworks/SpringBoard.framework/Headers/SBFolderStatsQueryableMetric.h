// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFOLDERSTATSQUERYABLEMETRIC_H
#define SBFOLDERSTATSQUERYABLEMETRIC_H

@class PETDistributionEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBFolderStatsQueryableMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETDistributionEventTracker *_dockAppsTracker;
    PETDistributionEventTracker *_dockFoldersTracker;
    PETDistributionEventTracker *_dockItemsTracker;
    PETDistributionEventTracker *_pageTracker;
    PETDistributionEventTracker *_folderTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif