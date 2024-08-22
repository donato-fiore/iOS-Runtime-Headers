// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKANALYTICS_H
#define SKANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKAnalytics : NSObject {
    NSString *_bundleID;
}




+(id)instance;
-(id)getBundleID;
-(void)sendAnalyticsDataWithKey:(id)arg0 ;


@end


#endif