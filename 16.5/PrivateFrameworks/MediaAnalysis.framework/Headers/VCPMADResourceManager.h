// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPMADRESOURCEMANAGER_H
#define VCPMADRESOURCEMANAGER_H

@class NSMutableArray, NSDate;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "VCPTimer.h"

@interface VCPMADResourceManager : NSObject {
    NSInteger _budget;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_resources;
    VCPTimer *_timer;
    NSDate *_inactiveDate;
    NSObject<OS_os_transaction> *_transaction;
}




+(id)sharedManager;
-(NSInteger)currentBudget;
-(NSInteger)validateCost:(NSInteger)arg0 ;
-(id)activateResource:(id)arg0 ;
-(id)entryForResource:(id)arg0 ;
-(id)init;
-(void)_purgeAllResources;
-(void)_reserveBudget:(NSInteger)arg0 ;
-(void)_setBudget:(NSInteger)arg0 ;
-(void)checkTimeout;
-(void)deactivateResource:(id)arg0 ;
-(void)dealloc;
-(void)purgeAllResources;
-(void)purgeInactiveResources;
-(void)reserveBudget:(NSInteger)arg0 ;


@end


#endif