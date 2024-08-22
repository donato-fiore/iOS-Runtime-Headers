// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NOTIFICATIONSENDER_H
#define NOTIFICATIONSENDER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface NotificationSender : NSObject

@property (readonly) NSString *name; // ivar: _name
@property (retain) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif