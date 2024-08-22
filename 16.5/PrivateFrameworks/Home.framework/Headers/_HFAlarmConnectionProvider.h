// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HFALARMCONNECTIONPROVIDER_H
#define _HFALARMCONNECTIONPROVIDER_H

@class NSXPCConnection, NSString;
@protocol COAlarmManagerConnectionProvider;

#import <Foundation/Foundation.h>


@interface _HFAlarmConnectionProvider : NSObject <COAlarmManagerConnectionProvider>



@property (readonly, nonatomic) NSXPCConnection *alarmManagerServiceConnection; // ivar: _alarmManagerServiceConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif