// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCATIONMANAGERSTATESTOREONDISKENV_H
#define ATXLOCATIONMANAGERSTATESTOREONDISKENV_H

@protocol ATXLocationManagerStateStoreOnDiskEnv;

#import <Foundation/Foundation.h>


@interface ATXLocationManagerStateStoreOnDiskEnv : NSObject <ATXLocationManagerStateStoreOnDiskEnv>

 {
    id *_stateChangeRegistration;
}




-(BOOL)isLocked;
-(int)openFileAtPath:(id)arg0 dataProtectionClass:(int)arg1 ;
-(void)callOnNextUnlock:(id)arg0 ;
-(void)dealloc;


@end


#endif