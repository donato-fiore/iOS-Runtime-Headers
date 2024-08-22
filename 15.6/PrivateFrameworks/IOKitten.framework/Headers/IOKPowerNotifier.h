// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOKPOWERNOTIFIER_H
#define IOKPOWERNOTIFIER_H

@protocol IOKPowerNotifierDelegate;

#import <Foundation/Foundation.h>


@interface IOKPowerNotifier : NSObject {
    *IONotificationPort _notificationPort;
    unsigned int _connection;
    unsigned int _notifier;
}


@property (weak, nonatomic) NSObject<IOKPowerNotifierDelegate> *delegate; // ivar: _delegate


-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_handlePowerNotificationWithMessageType:(unsigned int)arg0 andArgument:(NSInteger)arg1 ;
-(void)dealloc;
-(void)systemHasPoweredOn;
-(void)systemWillNotSleep;
-(void)systemWillPowerOn;
-(void)systemWillSleep;


@end


#endif