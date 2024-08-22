// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSCLOUDCONTROLLER_H
#define TPSCLOUDCONTROLLER_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}




+(id)sharedInstance;
-(BOOL)isHintDisplayedForContentID:(id)arg0 ;
-(id)_listDisplayContentIDs;
-(id)init;
-(void)_clearDisplayedContentIDs;
-(void)checkForUpdates;
-(void)dealloc;
-(void)hintDisplayedForContentID:(id)arg0 ;
-(void)registerForNotifications:(id)arg0 ;
-(void)updateKVStoreItems:(id)arg0 ;


@end


#endif