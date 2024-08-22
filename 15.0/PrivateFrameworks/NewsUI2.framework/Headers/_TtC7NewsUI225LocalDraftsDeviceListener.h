// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI225LOCALDRAFTSDEVICELISTENER_H
#define _TTC7NEWSUI225LOCALDRAFTSDEVICELISTENER_H

@protocol MCSessionDelegate, MCNearbyServiceBrowserDelegate;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI225LocalDraftsDeviceListener : NSObject <MCSessionDelegate, MCNearbyServiceBrowserDelegate>

 {
    ? localFiles;
    ? deviceInfo;
    ? delegate;
    ? previewServiceType;
    ? myPeerId;
    ? serviceBrowser;
    ? $__lazy_storage_$_session;
}




-(id)init;
-(void)dealloc;


@end


#endif