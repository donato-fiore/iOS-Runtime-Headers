// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSANALYTICS_H
#define CPSANALYTICS_H


#import <Foundation/Foundation.h>


@interface CPSAnalytics : NSObject

@property (readonly, nonatomic) BOOL shouldRecordAnalyticsEvents;


+(id)sharedInstance;
-(void)_sendCoreAnalyticsEvent:(id)arg0 withDictionary:(id)arg1 ;
-(void)audioAppMetadataThrottledWithBundleIdentifier:(id)arg0 ;
-(void)navigationStartedWithBundleIdentifier:(id)arg0 ;


@end


#endif