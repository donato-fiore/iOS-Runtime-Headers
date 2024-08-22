// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRDATABASEANALYSISSCHEDULERDATABASEASSERTIONPROVIDERIMPL_H
#define HKHRDATABASEANALYSISSCHEDULERDATABASEASSERTIONPROVIDERIMPL_H

@class HDProfile, NSString;
@protocol HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider;

#import <Foundation/Foundation.h>


@interface HKHRDatabaseAnalysisSchedulerDatabaseAssertionProviderImpl : NSObject <HKHRDatabaseAnalysisSchedulerDatabaseAssertionProvider>

 {
    HDProfile *_profile;
    NSString *_identifier;
}




-(id)initWithProfile:(id)arg0 identifier:(id)arg1 ;
-(id)takeAssertionWithError:(*id)arg0 ;


@end


#endif