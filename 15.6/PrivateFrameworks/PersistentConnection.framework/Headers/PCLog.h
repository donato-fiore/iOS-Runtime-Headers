// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCLOG_H
#define PCLOG_H


#import <Foundation/Foundation.h>


@interface PCLog : NSObject



+(id)interfaceManager;
+(id)logWithCategory:(char *)arg0 ;
+(id)timer;
+(id)usabilityMonitor;
+(id)wakeManager;


@end


#endif