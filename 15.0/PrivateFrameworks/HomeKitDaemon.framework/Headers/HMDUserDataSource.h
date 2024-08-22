// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERDATASOURCE_H
#define HMDUSERDATASOURCE_H

@protocol HMDUserDataSource;

#import <Foundation/Foundation.h>


@interface HMDUserDataSource : NSObject <HMDUserDataSource>





-(BOOL)isCurrentUser:(id)arg0 ;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg0 queue:(id)arg1 zoneName:(id)arg2 home:(id)arg3 shareMessenger:(id)arg4 ;
-(id)userDataControllerWithDelegate:(id)arg0 queue:(id)arg1 userID:(id)arg2 homeID:(id)arg3 sharedSettingsController:(id)arg4 privateSettingsController:(id)arg5 ;


@end


#endif