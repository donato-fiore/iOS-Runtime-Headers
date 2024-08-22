// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDMDECLARATIVEMANAGEMENTCOMMAND_H
#define MDMDECLARATIVEMANAGEMENTCOMMAND_H


#import <Foundation/Foundation.h>


@interface MDMDeclarativeManagementCommand : NSObject



+(BOOL)processMultiUserDeviceUserChannelRequestTypeWithProfileIdentifier:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
+(BOOL)processRequestTypeWithProfileIdentifier:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
+(BOOL)unenrollWithProfileIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)declarativeManagementFatalError;
+(void)_enrollmentTypeWithProfileIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif