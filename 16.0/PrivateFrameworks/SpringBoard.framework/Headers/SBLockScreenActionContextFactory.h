// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENACTIONCONTEXTFACTORY_H
#define SBLOCKSCREENACTIONCONTEXTFACTORY_H


#import <Foundation/Foundation.h>


@interface SBLockScreenActionContextFactory : NSObject



+(id)sharedInstance;
-(id)lockScreenActionContextForAction:(id)arg0 fromPlugin:(id)arg1 ;
-(id)lockScreenActionContextForAlertItem:(id)arg0 ;
-(id)lockScreenActionContextForPlugin:(id)arg0 ;


@end


#endif