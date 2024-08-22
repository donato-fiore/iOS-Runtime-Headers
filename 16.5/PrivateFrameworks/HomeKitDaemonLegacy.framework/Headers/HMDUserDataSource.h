// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUSERDATASOURCE_H
#define HMDUSERDATASOURCE_H

@class NSString;
@protocol HMDUserDataSource;

#import <Foundation/Foundation.h>


@interface HMDUserDataSource : NSObject <HMDUserDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isCurrentUser:(id)arg0 ;
-(id)userDataBackingStoreControllerWithDelegate:(id)arg0 queue:(id)arg1 zoneName:(id)arg2 shareMessenger:(id)arg3 ;
-(id)userDataControllerWithDelegate:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 userID:(id)arg3 homeID:(id)arg4 sharedSettingsController:(id)arg5 privateSettingsController:(id)arg6 isCurrentUser:(BOOL)arg7 ;


@end


#endif