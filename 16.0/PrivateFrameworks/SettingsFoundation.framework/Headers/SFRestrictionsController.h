// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFRESTRICTIONSCONTROLLER_H
#define SFRESTRICTIONSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SFRestrictionsController : NSObject



+(id)TCCServices;
+(id)restrictionSpecifiers;
+(void)resetRestrictions;
+(void)resetRestrictionsPassword;
+(void)setSpringBoardCapability:(id)arg0 enabled:(BOOL)arg1 ;


@end


#endif