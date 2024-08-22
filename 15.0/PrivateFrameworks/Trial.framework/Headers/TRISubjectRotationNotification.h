// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISUBJECTROTATIONNOTIFICATION_H
#define TRISUBJECTROTATIONNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface TRISubjectRotationNotification : NSObject



+(BOOL)notifySubjectRotation;
+(id)registerSubjectRotationWithQueue:(id)arg0 usingBlock:(id)arg1 ;
+(void)deregisterUpdateWithToken:(id)arg0 ;


@end


#endif