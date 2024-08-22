// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBCOOKIEOBSERVERADAPTER_H
#define WEBCOOKIEOBSERVERADAPTER_H


#import <Foundation/Foundation.h>


@interface WebCookieObserverAdapter : NSObject {
    *void observer;
}




-(id)initWithObserver:(*void)arg0 ;
-(void)cookiesChangedNotificationHandler:(id)arg0 ;


@end


#endif