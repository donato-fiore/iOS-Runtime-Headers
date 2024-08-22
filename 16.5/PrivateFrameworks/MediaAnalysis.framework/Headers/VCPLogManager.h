// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPLOGMANAGER_H
#define VCPLOGMANAGER_H


#import <Foundation/Foundation.h>


@interface VCPLogManager : NSObject

@property (readonly) int logLevel; // ivar: _logLevel


+(id)dateFormatter;
+(id)sharedLogManager;
-(id)init;


@end


#endif