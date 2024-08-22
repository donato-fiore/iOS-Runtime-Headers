// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SWIFTDRIVERMANAGER_H
#define _SWIFTDRIVERMANAGER_H


#import <Foundation/Foundation.h>


@interface _SwiftDriverManager : NSObject {
    ? client;
    ? launchServicesQueue;
    ? observerLock;
    ? observers;
    ? driverApprovalStatesLock;
    ? _driverApprovalStates;
}




+(id)sharedManager;
-(NSInteger)driverCount;
-(NSInteger)driverCountForAppID:(id)arg0 ;
-(NSInteger)thirdPartyDriverCount;
-(id)driverApprovalStatesForThirdPartyApp:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)refresh;
-(void)removeObserver:(id)arg0 ;
-(void)setDriverState:(id)arg0 approved:(BOOL)arg1 ;


@end


#endif