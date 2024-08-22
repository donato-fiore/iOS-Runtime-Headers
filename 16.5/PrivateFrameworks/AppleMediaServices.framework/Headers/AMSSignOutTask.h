// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSSIGNOUTTASK_H
#define AMSSIGNOUTTASK_H

@class NSArray;


#import "AMSTask.h"

@interface AMSSignOutTask : AMSTask

@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts


+(id)_signOutOfAccount:(id)arg0 ;
-(id)initWithAccounts:(id)arg0 ;
-(id)performTask;


@end


#endif