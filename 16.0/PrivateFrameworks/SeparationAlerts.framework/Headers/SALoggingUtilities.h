// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOGGINGUTILITIES_H
#define SALOGGINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface SALoggingUtilities : NSObject



+(id)computeMessagesForEvent:(id)arg0 ;
+(id)extractEventFromMessages:(id)arg0 ;
+(id)extractUniqueIdentifierFromMessage:(id)arg0 ;
+(id)stringToSplit:(id)arg0 maxSplitSize:(NSUInteger)arg1 ;
+(void)logTAEvent:(id)arg0 ;


@end


#endif