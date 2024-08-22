// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNINMEMORYTIMETOLEAVEREFRESHSTORAGE_H
#define CALNINMEMORYTIMETOLEAVEREFRESHSTORAGE_H

@class NSString, NSMutableDictionary;
@protocol CALNTimeToLeaveRefreshStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CALNInMemoryTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *refreshDateMap; // ivar: _refreshDateMap
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)init;
-(id)refreshDateWithIdentifier:(id)arg0 ;
-(id)refreshDates;
-(void)addRefreshDate:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeRefreshDateWithIdentifier:(id)arg0 ;
-(void)removeRefreshDates;


@end


#endif