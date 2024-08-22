// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSTESTAUTOMATION_H
#define DSTESTAUTOMATION_H


#import <Foundation/Foundation.h>


@interface DSTestAutomation : NSObject

@property (nonatomic) BOOL testAutomationEnabled; // ivar: _testAutomationEnabled


+(id)sharedInstance;
+(void)postConfiguration:(id)arg0 ;
+(void)postInteractiveTestEvent:(id)arg0 info:(id)arg1 ;
-(id)init;


@end


#endif