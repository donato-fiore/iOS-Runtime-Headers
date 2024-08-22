// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EDUSERACTIONSTATE_H
#define _EDUSERACTIONSTATE_H

@class NSString, NSDate;
@protocol ECMessage;

#import <Foundation/Foundation.h>


@interface _EDUserActionState : NSObject

@property (copy, nonatomic) NSString *cellStyle; // ivar: _cellStyle
@property (copy, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSObject<ECMessage> *message; // ivar: _message
@property (copy, nonatomic) NSString *messageListType; // ivar: _messageListType
@property (nonatomic) BOOL mutedThread; // ivar: _mutedThread
@property (nonatomic) NSInteger row; // ivar: _row
@property (nonatomic) BOOL scrolledToEnd; // ivar: _scrolledToEnd
@property (retain, nonatomic) NSDate *viewingStarted; // ivar: _viewingStarted




@end


#endif