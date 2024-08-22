// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMCTVUSERPROFILEMANAGER_H
#define SMCTVUSERPROFILEMANAGER_H

@protocol SMCTVUserProfile;

#import <Foundation/Foundation.h>


@interface SMCTVUserProfileManager : NSObject

@property (readonly, nonatomic) NSObject<SMCTVUserProfile> *selectedUserProfile;


+(id)sharedInstance;


@end


#endif