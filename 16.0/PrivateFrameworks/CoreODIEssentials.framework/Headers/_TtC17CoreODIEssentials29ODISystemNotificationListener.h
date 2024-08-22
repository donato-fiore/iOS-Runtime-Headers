// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17COREODIESSENTIALS29ODISYSTEMNOTIFICATIONLISTENER_H
#define _TTC17COREODIESSENTIALS29ODISYSTEMNOTIFICATIONLISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC17CoreODIEssentials29ODISystemNotificationListener : NSObject <NSXPCListenerDelegate>

 {
    ? systemNotificationListener;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif