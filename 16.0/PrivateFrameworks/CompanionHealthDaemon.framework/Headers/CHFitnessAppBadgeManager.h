// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHFITNESSAPPBADGEMANAGER_H
#define CHFITNESSAPPBADGEMANAGER_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CHFitnessAppBadgeManager : NSObject {
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(NSInteger)_badgeCount;
-(NSInteger)_loadBadgeCount;
-(id)init;
-(void)_launchFitnessApp;
-(void)_storeBadgeCount:(NSInteger)arg0 ;
-(void)registerProvider:(id)arg0 ;
-(void)requestBadgeUpdate;
-(void)unregisterProvider:(id)arg0 ;


@end


#endif