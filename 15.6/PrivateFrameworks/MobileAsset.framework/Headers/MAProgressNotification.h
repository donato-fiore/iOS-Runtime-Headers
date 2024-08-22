// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPROGRESSNOTIFICATION_H
#define MAPROGRESSNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface MAProgressNotification : NSObject

@property (nonatomic) CGFloat expectedTimeRemaining; // ivar: _expectedTimeRemaining
@property (nonatomic) BOOL isStalled; // ivar: _isStalled
@property (nonatomic) NSInteger totalExpected; // ivar: _totalExpected
@property (nonatomic) NSInteger totalWritten; // ivar: _totalWritten




@end


#endif