// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKMUTABLESESSIONBEHAVIOR_H
#define STKMUTABLESESSIONBEHAVIOR_H



#import "STKSessionBehavior.h"

@interface STKMutableSessionBehavior : STKSessionBehavior

@property (nonatomic) BOOL dismissesAfterUserEvent;
@property (nonatomic) BOOL shouldSendResponseUponDisplay;
@property (nonatomic) CGFloat timeout;




@end


#endif