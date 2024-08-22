// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKEXTERNALMEDIACONTENTMANAGER_H
#define WLKEXTERNALMEDIACONTENTMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface WLKExternalMediaContentManager : NSObject {
    NSXPCConnection *_connection;
}




+(id)sharedManager;
-(id)_connection;
-(id)_init;
-(id)_proxy;
-(id)init;
-(void)_deletePlaybackActivityWithIdentifier:(id)arg0 bundleID:(id)arg1 ;
-(void)deletePlaybackActivityWithIdentifier:(id)arg0 ;


@end


#endif