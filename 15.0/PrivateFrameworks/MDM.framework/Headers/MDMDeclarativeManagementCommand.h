// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMDECLARATIVEMANAGEMENTCOMMAND_H
#define MDMDECLARATIVEMANAGEMENTCOMMAND_H


#import <Foundation/Foundation.h>


@interface MDMDeclarativeManagementCommand : NSObject



+(BOOL)processRequestTypeWithProfileIdentifier:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
+(BOOL)unenrollWithProfileIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)declarativeManagementFatalError;
+(void)_channelTypeWithCompletionHandler:(id)arg0 ;


@end


#endif