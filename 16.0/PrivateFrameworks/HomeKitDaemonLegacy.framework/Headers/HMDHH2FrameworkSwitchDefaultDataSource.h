// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHH2FRAMEWORKSWITCHDEFAULTDATASOURCE_H
#define HMDHH2FRAMEWORKSWITCHDEFAULTDATASOURCE_H

@class NSString;
@protocol HMDHH2FrameworkSwitchDataSource;

#import <Foundation/Foundation.h>


@interface HMDHH2FrameworkSwitchDefaultDataSource : NSObject <HMDHH2FrameworkSwitchDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isHH2Enabled;
@property (readonly) NSUInteger setupMode;
@property (readonly) Class superclass;


-(id)controller:(id)arg0 cloudDatabaseWithContainerID:(id)arg1 ;


@end


#endif