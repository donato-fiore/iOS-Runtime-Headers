// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDAGENT_H
#define MDAGENT_H


#import <Foundation/Foundation.h>


@interface MDAgent : NSObject



+(id)sharedAgent;
-(id)init;
-(void)handleLogOut;


@end


#endif