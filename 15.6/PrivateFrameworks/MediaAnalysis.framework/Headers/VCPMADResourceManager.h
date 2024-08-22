// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPMADRESOURCEMANAGER_H
#define VCPMADRESOURCEMANAGER_H

@class NSMutableArray, NSDate;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "VCPTimer.h"

@interface VCPMADResourceManager : NSObject {
    CGFloat _budget;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_resources;
    VCPTimer *_timer;
    NSDate *_lastActivation;
    NSObject<OS_os_transaction> *_transaction;
}




+(id)sharedManager;
-(CGFloat)currentBudget;
-(id)activateResource:(id)arg0 ;
-(id)entryForResource:(id)arg0 ;
-(id)init;
-(void)_purgeAllResources;
-(void)_reserveBudget:(CGFloat)arg0 ;
-(void)_setBudget:(CGFloat)arg0 ;
-(void)checkTimeout;
-(void)deactivateResource:(id)arg0 ;
-(void)dealloc;
-(void)purgeAllResources;
-(void)reserveBudget:(CGFloat)arg0 ;


@end


#endif