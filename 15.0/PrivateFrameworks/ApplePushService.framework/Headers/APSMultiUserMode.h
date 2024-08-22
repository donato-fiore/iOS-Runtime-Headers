// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APSMULTIUSERMODE_H
#define APSMULTIUSERMODE_H


#import <Foundation/Foundation.h>


@interface APSMultiUserMode : NSObject

@property (readonly, nonatomic) BOOL isLoggedInUser; // ivar: _isLoggedInUser
@property (readonly, nonatomic) BOOL isMultiUser; // ivar: _isMultiUser


+(BOOL)_getIsCurrentlyLoggedIn;
+(BOOL)_getMultiUserMode;
+(id)sharedInstance;
-(BOOL)isMultiAndLoggedIn;
-(id)initWithIsMultiUserMode:(BOOL)arg0 loggedInUser:(BOOL)arg1 ;


@end


#endif