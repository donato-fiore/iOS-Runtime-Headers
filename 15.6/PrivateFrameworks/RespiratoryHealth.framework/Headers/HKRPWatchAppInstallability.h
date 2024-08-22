// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKRPWATCHAPPINSTALLABILITY_H
#define HKRPWATCHAPPINSTALLABILITY_H

@protocol HKRPWatchAppInstallabilityDataSource;

#import <Foundation/Foundation.h>


@interface HKRPWatchAppInstallability : NSObject {
    id<HKRPWatchAppInstallabilityDataSource> *_dataSource;
}


@property (readonly, nonatomic) BOOL shouldInstallWatchApp;


-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif