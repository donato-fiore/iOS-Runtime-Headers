// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXCLOCKMANAGEREXPORTED_H
#define TSXCLOCKMANAGEREXPORTED_H

@class NSString;
@protocol TSXClockManagerClientProtocol;

#import <Foundation/Foundation.h>

#import "TSXClockManager.h"

@interface TSXClockManagerExported : NSObject <TSXClockManagerClientProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSXClockManager *object; // ivar: _object
@property (readonly) Class superclass;


-(void)changedTranslationClockMaster;
-(void)updateTranslationClockLockState:(int)arg0 ;
-(void)updateTranslationClockTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif