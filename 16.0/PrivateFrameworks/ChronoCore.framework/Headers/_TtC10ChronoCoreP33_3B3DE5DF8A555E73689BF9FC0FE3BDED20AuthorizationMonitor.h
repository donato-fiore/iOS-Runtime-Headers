// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCOREP33_3B3DE5DF8A555E73689BF9FC0FE3BDED20AUTHORIZATIONMONITOR_H
#define _TTC10CHRONOCOREP33_3B3DE5DF8A555E73689BF9FC0FE3BDED20AUTHORIZATIONMONITOR_H

@protocol CLLocationManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCoreP33_3B3DE5DF8A555E73689BF9FC0FE3BDED20AuthorizationMonitor : NSObject <CLLocationManagerDelegate>

 {
    ? containerIdentifier;
    ? service;
    ? manager;
    ? lock;
    ? assertionCount;
    ? status;
}




-(id)init;
-(void)dealloc;
-(void)locationManagerDidChangeAuthorization:(id)arg0 ;


@end


#endif