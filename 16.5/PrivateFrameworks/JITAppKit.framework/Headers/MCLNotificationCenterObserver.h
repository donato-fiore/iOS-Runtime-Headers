// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCLNOTIFICATIONCENTEROBSERVER_H
#define MCLNOTIFICATIONCENTEROBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MCLNotificationCenterObserver : NSObject

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) NSString *notification; // ivar: _notification
@property (retain, nonatomic) id *object; // ivar: _object


-(id)init;
-(void)dealloc;
-(void)observeNotification:(id)arg0 ;
-(void)setup;


@end


#endif