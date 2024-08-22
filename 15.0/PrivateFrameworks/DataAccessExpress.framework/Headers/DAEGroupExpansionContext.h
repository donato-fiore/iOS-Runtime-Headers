// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAEGROUPEXPANSIONCONTEXT_H
#define DAEGROUPEXPANSIONCONTEXT_H

@class NSString, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DAEGroupExpansionContext : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, nonatomic) NSString *principalPath; // ivar: _principalPath
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDictionary *results; // ivar: _results
@property (nonatomic) BOOL shouldSyncCalendar; // ivar: _shouldSyncCalendar


-(id)initWithCompletionBlock:(id)arg0 ;
-(void)finishedWithError:(id)arg0 ;


@end


#endif