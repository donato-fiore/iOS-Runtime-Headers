// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRIVERMANAGER_H
#define DRIVERMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "_SwiftDriverManager.h"

@interface DriverManager : NSObject {
    _SwiftDriverManager *_swiftManager;
    NSMutableArray *_observers;
}




+(id)sharedManager;
-(NSInteger)driverCount;
-(NSInteger)driverCountForAppID:(id)arg0 ;
-(NSInteger)thirdPartyDriverCount;
-(id)driverApprovalStatesForThirdPartyApp:(id)arg0 ;
-(id)initWithSwiftManager:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)refresh;
-(void)removeObserver:(id)arg0 ;
-(void)setDriverState:(id)arg0 approved:(BOOL)arg1 ;


@end


#endif