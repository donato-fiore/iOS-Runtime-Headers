// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYSERVICECONFIGURATION_H
#define OSPREYSERVICECONFIGURATION_H


#import <Foundation/Foundation.h>

#import "OspreyConnectionPool.h"

@interface OspreyServiceConfiguration : NSObject

@property (readonly) OspreyConnectionPool *connectionPool; // ivar: _connectionPool


+(id)sharedConfiguration;
-(id)init;


@end


#endif