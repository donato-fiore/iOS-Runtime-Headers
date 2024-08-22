// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMMANAGERCONFIGURATION_H
#define BMMANAGERCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BMManagerConfiguration : NSObject {
    ? localStorageDirectory;
    ? shouldRunUpdatesOnSchedule;
    ? shouldPurgeOutdatedData;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(id)initWithDirectory:(id)arg0 shouldRunUpdatesOnSchedule:(BOOL)arg1 shouldPurgeOutdatedData:(BOOL)arg2 ;


@end


#endif