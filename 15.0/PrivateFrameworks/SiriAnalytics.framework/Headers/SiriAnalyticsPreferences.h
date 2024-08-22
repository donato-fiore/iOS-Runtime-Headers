// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIANALYTICSPREFERENCES_H
#define SIRIANALYTICSPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsPreferences : NSObject {
    *__CFString _domain;
}




-(BOOL)tailMessagesToOSLogEnabled;
-(id)init;
-(id)initWithPreferencesDomain:(struct __CFString *)arg0 ;
-(void)synchronize;


@end


#endif