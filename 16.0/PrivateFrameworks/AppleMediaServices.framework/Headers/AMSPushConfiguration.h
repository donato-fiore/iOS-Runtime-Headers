// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPUSHCONFIGURATION_H
#define AMSPUSHCONFIGURATION_H

@class NSSet, NSString;
@protocol AMSPushHandlerDelegate;

#import <Foundation/Foundation.h>


@interface AMSPushConfiguration : NSObject

@property (weak, nonatomic) NSObject<AMSPushHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSSet *enabledActionTypes; // ivar: _enabledActionTypes
@property (retain, nonatomic) NSString *engagementPushTopic; // ivar: _engagementPushTopic
@property (retain, nonatomic) NSString *userNotificationExtensionId; // ivar: _userNotificationExtensionId


-(id)initWithEnabledActionTypes:(id)arg0 ;


@end


#endif