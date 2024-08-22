// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLCLOUDPHOTOLIBRARYUSERSWITCHHANDLER_H
#define PLCLOUDPHOTOLIBRARYUSERSWITCHHANDLER_H

@class NSString;
@protocol UMUserSwitchStakeholder, PLCloudUserSessionHandling;

#import <Foundation/Foundation.h>


@interface PLCloudPhotoLibraryUserSwitchHandler : NSObject <UMUserSwitchStakeholder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<PLCloudUserSessionHandling> *sessionHandler; // ivar: _sessionHandler
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)willSwitchUser;


@end


#endif