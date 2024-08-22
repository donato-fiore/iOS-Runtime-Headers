// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMBUFFERNOTIFICATIONOBSERVANCE_H
#define CAMBUFFERNOTIFICATIONOBSERVANCE_H

@class NSString, NSNotificationCenter;

#import <Foundation/Foundation.h>

#import "CAMBufferObservance.h"

@interface CAMBufferNotificationObservance : CAMBufferObservance

@property (readonly, copy, nonatomic) NSString *notification; // ivar: _notification
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, weak, nonatomic) NSObject *object; // ivar: _object


-(id)initWithNotification:(id)arg0 object:(id)arg1 center:(id)arg2 removeOnceEnabled:(BOOL)arg3 ;
-(void)fulfillWithChange:(id)arg0 ;
-(void)setupObservanceForBuffer:(id)arg0 ;
-(void)teardownObservanceForBuffer:(id)arg0 ;


@end


#endif