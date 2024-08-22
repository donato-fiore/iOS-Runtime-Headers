// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRDAEMONNOTIFICATION_H
#define SRDAEMONNOTIFICATION_H

@class NSString;
@protocol SRDaemonNotificationDelegate;

#import <Foundation/Foundation.h>


@interface SRDaemonNotification : NSObject {
    int _registrationToken;
    int _significantTimeChangeToken;
    int _resetDatastoreToken;
    id<SRDaemonNotificationDelegate> *_delegate;
    NSString *_sensorIdentifier;
}




+(void)initialize;
-(void)dealloc;


@end


#endif