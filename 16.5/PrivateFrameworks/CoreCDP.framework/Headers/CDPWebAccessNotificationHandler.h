// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPWEBACCESSNOTIFICATIONHANDLER_H
#define CDPWEBACCESSNOTIFICATIONHANDLER_H


#import <Foundation/Foundation.h>


@interface CDPWebAccessNotificationHandler : NSObject {
    BOOL _isObservingWebAccessStatus;
}




+(id)sharedInstance;
-(void)_stopObservingWebAccessStateChangeNotification;
-(void)dealloc;
-(void)startObservingWebAccessStateChangeNotification;


@end


#endif