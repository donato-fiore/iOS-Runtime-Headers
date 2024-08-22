// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIXPCSERVICES_H
#define TRIXPCSERVICES_H


#import <Foundation/Foundation.h>


@interface TRIXPCServices : NSObject



+(void)registerAllServicesInErrorMode;
+(void)registerAllServicesWithServerContext:(id)arg0 taskQueue:(id)arg1 ;


@end


#endif