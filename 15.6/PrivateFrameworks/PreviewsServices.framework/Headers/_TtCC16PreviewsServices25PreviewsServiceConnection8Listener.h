// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCC16PREVIEWSSERVICES25PREVIEWSSERVICECONNECTION8LISTENER_H
#define _TTCC16PREVIEWSSERVICES25PREVIEWSSERVICECONNECTION8LISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC16PreviewsServices25PreviewsServiceConnection8Listener : NSObject <NSXPCListenerDelegate>

 {
    ? listener;
    ? connectionHandler;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif