// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLSUPPORT11HOMEMANAGER_H
#define _TTC26SIRIPLAYBACKCONTROLSUPPORT11HOMEMANAGER_H

@protocol HMHomeManagerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlSupport11HomeManager : NSObject <HMHomeManagerDelegate>

 {
    ? homeManagerInitTimeout;
    ? hmHomeManager;
    ? hmHomeManagerOptions;
    ? homeData;
    ? mgGroupQuery;
    ? readyGroup;
    ? initializationSignpost;
    ? loadQueue;
    ? homeKitTracker;
    ? mediaGroupTracker;
}




-(id)init;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;


@end


#endif