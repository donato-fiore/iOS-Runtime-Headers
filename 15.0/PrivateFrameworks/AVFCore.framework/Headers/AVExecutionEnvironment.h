// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVEXECUTIONENVIRONMENT_H
#define AVEXECUTIONENVIRONMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;


+(id)currentPlatformIdentifier;
+(id)sharedExecutionEnvironment;
+(void)initialize;


@end


#endif