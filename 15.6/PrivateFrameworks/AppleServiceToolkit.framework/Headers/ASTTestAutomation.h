// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASTTESTAUTOMATION_H
#define ASTTESTAUTOMATION_H


#import <Foundation/Foundation.h>


@interface ASTTestAutomation : NSObject

@property (nonatomic) BOOL testAutomationEnabled; // ivar: _testAutomationEnabled


+(id)sharedInstance;
+(void)postServerRequest:(id)arg0 ;
+(void)postServerResponse:(id)arg0 ;
-(id)init;


@end


#endif