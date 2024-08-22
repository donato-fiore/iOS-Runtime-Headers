// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDINTERACTIONSTORENOTIFICATIONRECEIVER_H
#define _CDINTERACTIONSTORENOTIFICATIONRECEIVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDInteractionStoreNotificationReceiver : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)dealloc;
-(void)postPackedMechanisms:(NSUInteger)arg0 ;


@end


#endif