// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXEXPIREDDATAPROVIDER_H
#define ATXEXPIREDDATAPROVIDER_H

@protocol ATXExpiredDataProviderProtocol;

#import <Foundation/Foundation.h>

#import "_ATXAppInfoManager.h"
#import "ATXHistogramBundleIdTable.h"

@interface ATXExpiredDataProvider : NSObject <ATXExpiredDataProviderProtocol>

 {
    _ATXAppInfoManager *_appInfoManager;
    ATXHistogramBundleIdTable *_histogramBundleIdTable;
}




-(id)expiredActionKeysFromExpiredBundleIds:(id)arg0 ;
-(id)expiredBundleIds;
-(id)expiredBundleIdsAndActionKeys;
-(id)init;
-(id)initWithAppInfoManager:(id)arg0 histogramBundleIdTable:(id)arg1 ;


@end


#endif