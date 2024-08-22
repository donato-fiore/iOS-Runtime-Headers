// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGCURATEDCHANGENOTIFICATIONSADDRESSBOOKLISTENER_H
#define SGCURATEDCHANGENOTIFICATIONSADDRESSBOOKLISTENER_H

@protocol NSObject, OS_dispatch_queue;


#import "SGCuratedChangeNotificationsBaseListener.h"

@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> *_notificationCenterToken;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}




-(void)startListening;
-(void)stopListening;


@end


#endif