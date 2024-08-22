// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHRDATABASEANALYSISSCHEDULERGATEDACTIVITYFACTORYIMPL_H
#define HKHRDATABASEANALYSISSCHEDULERGATEDACTIVITYFACTORYIMPL_H

@class NSString;
@protocol HKHRDatabaseAnalysisSchedulerGatedActivityFactory, OS_os_log;

#import <Foundation/Foundation.h>


@interface HKHRDatabaseAnalysisSchedulerGatedActivityFactoryImpl : NSObject <HKHRDatabaseAnalysisSchedulerGatedActivityFactory>

 {
    NSString *_identifier;
    NSObject<OS_os_log> *_loggingCategory;
}




-(id)initWithIdentifier:(id)arg0 loggingCategory:(id)arg1 ;
-(id)makeGatedActivityWithHandler:(id)arg0 ;


@end


#endif