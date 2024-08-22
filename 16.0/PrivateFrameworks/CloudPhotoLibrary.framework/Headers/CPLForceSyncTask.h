// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLFORCESYNCTASK_H
#define CPLFORCESYNCTASK_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CPLForceSyncTask : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, copy, nonatomic) NSArray *scopeIdentifiers; // ivar: _scopeIdentifiers
@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


-(id)description;
-(id)initWithScopeIdentifiers:(id)arg0 ;
-(void)cancelTask;
-(void)launchTask;


@end


#endif