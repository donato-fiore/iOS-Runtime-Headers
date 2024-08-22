// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AOSTHREADMANAGER_H
#define AOSTHREADMANAGER_H


#import <Foundation/Foundation.h>


@interface AOSThreadManager : NSObject



+(id)sharedManager;
-(void)dealloc;
-(void)runAuthThreadWithContext:(id)arg0 ;


@end


#endif