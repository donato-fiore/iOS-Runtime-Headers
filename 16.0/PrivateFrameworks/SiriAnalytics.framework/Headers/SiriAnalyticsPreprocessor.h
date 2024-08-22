// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSPREPROCESSOR_H
#define SIRIANALYTICSPREPROCESSOR_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsPreprocessor : NSObject {
    ? metastore;
    ? prefs;
    ? messageStore;
    ? fbf;
    ? telemetry;
    ? queue;
}




-(id)init;
-(id)initWithMetastore:(id)arg0 prefs:(id)arg1 messageStore:(id)arg2 fbf:(id)arg3 telemetry:(id)arg4 ;
-(void)processWithReason:(NSInteger)arg0 ;
-(void)processWithReason:(NSInteger)arg0 completion:(id)arg1 ;


@end


#endif