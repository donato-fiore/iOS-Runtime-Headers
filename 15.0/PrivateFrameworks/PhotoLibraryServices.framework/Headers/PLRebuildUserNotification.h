// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREBUILDUSERNOTIFICATION_H
#define PLREBUILDUSERNOTIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLRebuildUserNotification : NSObject

@property (readonly) NSString *message; // ivar: _message


-(BOOL)_shouldShowUserNotification;
-(NSInteger)showAlertAndWaitForResponse;
-(id)initWithMessage:(id)arg0 ;
-(void)_snoozeForHours:(NSUInteger)arg0 ;


@end


#endif