// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MICONTAINERPROTECTIONMANAGER_H
#define MICONTAINERPROTECTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface MIContainerProtectionManager : NSObject



+(id)defaultManager;
-(void)setDataProtectionOnDataContainer:(id)arg0 forNewBundle:(id)arg1 retryIfLocked:(BOOL)arg2 ;


@end


#endif