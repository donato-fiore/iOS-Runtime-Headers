// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDACTIVITYDEMODATASTORE_H
#define HDACTIVITYDEMODATASTORE_H


#import <Foundation/Foundation.h>


@interface HDActivityDemoDataStore : NSObject



+(BOOL)shouldShowActivityDemoData;
+(id)demoStatisticsDataForTypeIdentifier:(id)arg0 ;
+(id)demoValueForKey:(id)arg0 withDataTypeIdentifier:(id)arg1 ;


@end


#endif