// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGESMISSINGBODYDATA_H
#define MFMESSAGESMISSINGBODYDATA_H

@class NSIndexSet, NSArray;

#import <Foundation/Foundation.h>


@interface MFMessagesMissingBodyData : NSObject

@property (readonly, copy, nonatomic) NSIndexSet *fragmentedMessages; // ivar: _fragmentedMessages
@property (readonly, copy, nonatomic) NSArray *messagesMissingBodyData; // ivar: _messagesMissingBodyData
@property (readonly, copy, nonatomic) NSIndexSet *messagesNotMissingBodyData; // ivar: _messagesNotMissingBodyData




@end


#endif