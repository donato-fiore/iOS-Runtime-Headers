// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRIVATEDATABASECKOPERATIONRESULTS_H
#define FCCKPRIVATEDATABASECKOPERATIONRESULTS_H

@class NSError, NSArray;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "FCThreadSafeMutableArray.h"

@interface FCCKPrivateDatabaseCKOperationResults : NSObject

@property (readonly, nonatomic) NSError *combinedError;
@property (readonly, nonatomic) NSArray *combinedResultItems;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeErrorsAndItemIDs; // ivar: _threadSafeErrorsAndItemIDs
@property (retain, nonatomic) FCThreadSafeMutableArray *threadSafeItems; // ivar: _threadSafeItems


-(id)init;
-(void)notifyWhenFinishWithQoS:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)operationDidFinishWithItemIDs:(id)arg0 resultItems:(id)arg1 error:(id)arg2 ;
-(void)operationWillStart;


@end


#endif