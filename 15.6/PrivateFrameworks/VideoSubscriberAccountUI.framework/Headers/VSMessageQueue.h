// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSMESSAGEQUEUE_H
#define VSMESSAGEQUEUE_H

@class NSMutableArray;
@protocol VSMessageQueueDelegate;

#import <Foundation/Foundation.h>


@interface VSMessageQueue : NSObject

@property (weak, nonatomic) NSObject<VSMessageQueueDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableArray *messages; // ivar: _messages


-(id)init;
-(id)removeAllMessages;
-(void)addMessage:(id)arg0 ;


@end


#endif