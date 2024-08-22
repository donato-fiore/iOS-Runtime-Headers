// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSANDBOXHELPER_H
#define PLSANDBOXHELPER_H


#import <Foundation/Foundation.h>


@interface PLSandboxHelper : NSObject



+(BOOL)processCanReadSandboxForPath:(id)arg0 ;
+(BOOL)processCanWriteSandboxForPath:(id)arg0 ;
+(BOOL)processWithID:(int)arg0 canReadSandboxForPath:(id)arg1 ;
+(BOOL)processWithID:(int)arg0 canWriteSandboxForPath:(id)arg1 ;


@end


#endif