// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ABDYNAMICLOADER_H
#define ABDYNAMICLOADER_H


#import <Foundation/Foundation.h>


@interface ABDynamicLoader : NSObject



+(BOOL)loadFrameworkAtPath:(id)arg0 andStoreHandle:(**void)arg1 bundle:(*id)arg2 ;
+(BOOL)loadFrameworkAtPath:(id)arg0 andStoreHandle:(**void)arg1 bundle:(*id)arg2 logging:(BOOL)arg3 ;


@end


#endif