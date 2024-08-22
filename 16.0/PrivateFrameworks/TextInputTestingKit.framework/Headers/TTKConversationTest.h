// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTKCONVERSATIONTEST_H
#define TTKCONVERSATIONTEST_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface TTKConversationTest : NSObject

@property (readonly, nonatomic) BOOL adaptToReceivedMessages; // ivar: _adaptToReceivedMessages
@property (readonly, nonatomic) BOOL adaptToSentMessages; // ivar: _adaptToSentMessages
@property (readonly, nonatomic) NSArray *conversation; // ivar: _conversation
@property (readonly, nonatomic) NSSet *sendersToTest; // ivar: _sendersToTest
@property (readonly, nonatomic) NSUInteger warmupMessages; // ivar: _warmupMessages


+(id)fromJsonDict:(id)arg0 ;
+(id)testWithConversation:(id)arg0 sendersToTest:(id)arg1 warmupMessages:(NSUInteger)arg2 adaptToSentMessages:(BOOL)arg3 adaptToReceivedMessages:(BOOL)arg4 ;
-(id)overridingJsonKeys:(id)arg0 ;
-(id)toJsonDict;


@end


#endif