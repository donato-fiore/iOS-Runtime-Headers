// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCURATEDCHANGENOTIFICATIONSCALENDARLISTENER_H
#define SGCURATEDCHANGENOTIFICATIONSCALENDARLISTENER_H

@protocol NSObject;


#import "SGCuratedChangeNotificationsBaseListener.h"

@interface SGCuratedChangeNotificationsCalendarListener : SGCuratedChangeNotificationsBaseListener {
    id<NSObject> *_notificationCenterToken;
}




-(void)startListening;
-(void)stopListening;


@end


#endif