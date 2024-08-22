// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHENSUREFLIPBOOKCURRENTOPERATION_H
#define BLSHENSUREFLIPBOOKCURRENTOPERATION_H

@class NSString;
@protocol BLSHPendingOperation;

#import <Foundation/Foundation.h>


@interface BLSHEnsureFlipbookCurrentOperation : NSObject <BLSHPendingOperation>



@property (getter=isCompleted) BOOL completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isStarted) BOOL started; // ivar: _started
@property (readonly) Class superclass;
@property (readonly) NSInteger type;


+(id)operation;


@end


#endif