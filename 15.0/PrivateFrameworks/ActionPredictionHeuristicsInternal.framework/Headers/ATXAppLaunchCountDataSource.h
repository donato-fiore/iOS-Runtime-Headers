// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPLAUNCHCOUNTDATASOURCE_H
#define ATXAPPLAUNCHCOUNTDATASOURCE_H

@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXAppLaunchCountDataSource : NSObject {
    ATXHeuristicDevice *_device;
    id<_DKKnowledgeQuerying> *_duetStore;
}




-(id)initWithDevice:(id)arg0 ;
-(void)appLaunchCountForBundleId:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 limit:(NSUInteger)arg3 callback:(id)arg4 ;


@end


#endif