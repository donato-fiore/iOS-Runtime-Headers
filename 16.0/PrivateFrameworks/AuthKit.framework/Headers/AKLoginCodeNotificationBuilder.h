// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKLOGINCODENOTIFICATIONBUILDER_H
#define AKLOGINCODENOTIFICATIONBUILDER_H


#import <Foundation/Foundation.h>


@interface AKLoginCodeNotificationBuilder : NSObject



+(id)buildLoginCodeNotificationOptionsWithTitle:(id)arg0 body:(id)arg1 footer:(id)arg2 loginCode:(id)arg3 ;
+(struct __CFUserNotification *)buildLoginCodeNotificationWithTitle:(id)arg0 body:(id)arg1 footer:(id)arg2 loginCode:(id)arg3 ;


@end


#endif