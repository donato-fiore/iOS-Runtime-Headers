// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKDARWINNOTIFICATIONCENTEROBSERVER_H
#define NTKDARWINNOTIFICATIONCENTEROBSERVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NTKDarwinNotificationCenterObserver : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (weak, nonatomic) NSObject *observerObject; // ivar: _observerObject
@property (nonatomic) SEL selector; // ivar: _selector


-(BOOL)isEqual:(id)arg0 ;


@end


#endif