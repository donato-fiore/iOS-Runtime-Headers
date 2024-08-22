// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMSYSTEMCHANGEMONITOR_H
#define MCMSYSTEMCHANGEMONITOR_H

@class NSString;
@protocol MCMUserIdentityCacheObserver;

#import <Foundation/Foundation.h>


@interface MCMSystemChangeMonitor : NSObject <MCMUserIdentityCacheObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)userIdentityCache:(id)arg0 didAddUserIdentity:(id)arg1 ;
-(void)userIdentityCache:(id)arg0 didInvalidateUserIdentity:(id)arg1 ;


@end


#endif