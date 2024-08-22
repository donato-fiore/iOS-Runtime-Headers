// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCOALESCERACTIVITYTOKEN_H
#define PFCOALESCERACTIVITYTOKEN_H

@class NSArray, NSDate, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PFCoalescerActivityToken : NSObject

@property (retain) NSArray *callStackReturnAddresses; // ivar: _callStackReturnAddresses
@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (retain) NSString *reason; // ivar: _reason


-(id)description;
-(id)initWithDispatchGroup:(id)arg0 reason:(id)arg1 ;
-(void)dealloc;
-(void)endActivity;


@end


#endif