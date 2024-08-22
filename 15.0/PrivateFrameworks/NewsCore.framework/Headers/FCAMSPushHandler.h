// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCAMSPUSHHANDLER_H
#define FCAMSPUSHHANDLER_H

@class NFLazy;

#import <Foundation/Foundation.h>


@interface FCAMSPushHandler : NSObject

@property (retain, nonatomic) NFLazy *lazyHandler; // ivar: _lazyHandler


-(BOOL)shouldHandleNotification:(id)arg0 ;
-(BOOL)shouldHandleNotificationResponse:(id)arg0 ;
-(id)init;
-(void)handleNotification:(id)arg0 ;
-(void)handleNotificationResponse:(id)arg0 ;


@end


#endif