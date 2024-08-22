// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMPONENTDEBUGCONTROLLER_H
#define CKCOMPONENTDEBUGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CKComponentDebugController : NSObject



+(BOOL)debugMode;
+(void)reflowComponents;
+(void)registerReflowListener:(id)arg0 ;
+(void)setDebugMode:(BOOL)arg0 ;


@end


#endif