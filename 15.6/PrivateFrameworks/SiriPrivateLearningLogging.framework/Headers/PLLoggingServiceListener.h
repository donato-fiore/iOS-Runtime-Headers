// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOGGINGSERVICELISTENER_H
#define PLLOGGINGSERVICELISTENER_H

@class NSXPCListener;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface PLLoggingServiceListener : NSObject

@property (retain, nonatomic) NSObject<NSXPCListenerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSXPCListener *listener; // ivar: _listener


+(id)sharedInstance;
-(id)init;


@end


#endif